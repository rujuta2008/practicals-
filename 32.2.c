#include <stdio.h>

int main() {
    FILE *fp;
    int n, i, mark;

    // ---------- Writing Marks to File ----------
    fp = fopen("marks.dat", "wb");   // open file in write-binary mode
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("\n---- Enter Marks ----\n");
    for (i = 0; i < n; i++) {
        printf("Enter mark of student %d: ", i + 1);
        scanf("%d", &mark);

        putw(mark, fp);   // write integer to file
    }

    fclose(fp);
    printf("\nMarks stored successfully!\n\n");

    // ---------- Reading Marks from File ----------
    fp = fopen("marks.dat", "rb");   // open file in read-binary mode
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("---- Retrieved Marks ----\n");
    i = 1;
    while (!feof(fp)) {
        mark = getw(fp);     // read integer from file

        if (!feof(fp)) {     // avoid printing extra repeated value at end
            printf("Student %d: %d\n", i, mark);
            i++;
        }
    }

    fclose(fp);
    return 0;
}