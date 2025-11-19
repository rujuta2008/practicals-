#include <stdio.h>

// Function to calculate length
int length(char str[]) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// Function to reverse a string
void reverse(char str[]) {
    int len = length(str);
    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
}

// Function to compare two strings
int compare(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return 0;
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
        return 1;
    else
        return 0;
}

// Function to copy a string
void copy(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0') {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
}

// Function to concatenate two strings
void concat(char s1[], char s2[]) {
    int i = length(s1);
    int j = 0;
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

// Convert to uppercase
void toUpper(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
}

// Convert to lowercase
void toLower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
}

// Capitalize first letter of each word
void capitalize(char str[]) {
    int newWord = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (newWord && str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        newWord = (str[i] == ' ') ? 1 : 0;
    }
}

int main() {
    char note1[100], note2[100], copyNote[100];
    int choice;

    printf("Enter first note: ");
    gets(note1);
    printf("Enter second note: ");
    gets(note2);

    do {
        printf("\n\n===== NOTE MANAGER =====");
        printf("\n1. Length of Note");
        printf("\n2. Reverse Note");
        printf("\n3. Compare Notes");
        printf("\n4. Copy Note");
        printf("\n5. Concatenate Notes");
        printf("\n6. Convert to UPPERCASE");
        printf("\n7. Convert to lowercase");
        printf("\n8. Capitalize Each Word");
        printf("\n9. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {
            case 1:
                printf("Length of first note = %d", length(note1));
                break;

            case 2:
                printf("Reversed Note: ");
                reverse(note1);
                break;

            case 3:
                if (compare(note1, note2))
                    printf("Both notes are SAME");
                else
                    printf("Notes are DIFFERENT");
                break;

            case 4:
                copy(note1, copyNote);
                printf("Copied Note: %s", copyNote);
                break;

            case 5:
                concat(note1, note2);
                printf("After Concatenation: %s", note1);
                break;

            case 6:
                toUpper(note1);
                printf("Uppercase Note: %s", note1);
                break;

            case 7:
                toLower(note1);
                printf("Lowercase Note: %s", note1);
                break;

            case 8:
                capitalize(note1);
                printf("Capitalized Note: %s", note1);
                break;

            case 9:
                printf("Exiting... Thank you!");
                break;

            default:
                printf("Invalid choice! Try again.");
        }
    } while (choice != 9);

    return 0;
}
