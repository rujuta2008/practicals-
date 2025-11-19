/*Aim:Dynamic Artical Summary Editing
  Editor:Maitri
  Edited date:15/11/2025*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *summary;
    int initialSize, newSize;


    printf("Enter initial size of the article summary: ");
    scanf("%d", &initialSize);
    getchar();

    if (initialSize <= 0) {
        printf("Error: Invalid initial size.\n");
        return 1;
    }

    summary = (char *)calloc(initialSize, sizeof(char));
    if (summary == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }


    printf("Enter the initial article summary:\n");
    fgets(summary, initialSize, stdin);
    summary[strcspn(summary, "\n")] = '\0';

    printf("\nInitial Summary: %s\n", summary);

    printf("\nEnter new size for updating (larger) summary: ");
    scanf("%d", &newSize);
    getchar();

    if (newSize <= initialSize) {
        printf("Error: New size must be greater than initial size.\n");
        free(summary);
        return 1;
    }

    summary = (char *)realloc(summary, newSize * sizeof(char));
    if (summary == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Enter the updated (longer) article summary:\n");
    fgets(summary, newSize, stdin);
    summary[strcspn(summary, "\n")] = '\0';

    printf("\nUpdated Summary: %s\n", summary);

    free(summary);
    return 0;
}
