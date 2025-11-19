/*Aim: Reverse each word in a file(Demo.txt)
  Editor:Maitri
  Edited Date:15/11/2025*/

#include <stdio.h>
#include <string.h>

void reverse(char *text) {
    int length = strlen(text);
    char temp;

    for (int i = 0; i < length / 2; i++) {
        temp = text[i];
        text[i] = text[length - i - 1];
        text[length - i - 1] = temp;
    }
}

int main() {
    FILE *file;
    char text[1000];

    file = fopen("Demo.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file Demo.txt\n");
        return 1;
    }

    fgets(text, sizeof(text), file);
    fclose(file);

    printf("Original Text: %s \n", text);

    reverse(text);

    printf("Reversed Text: %s\n", text);

    return 0;
}
