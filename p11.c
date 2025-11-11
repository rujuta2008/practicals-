#include <stdio.h>
int main() {
    int marks;
    char grade;
    printf("Enter student's marks (0-100): ");
    scanf("%d", &marks);
    grade = (marks < 0 || marks > 100) ? 'X' :
            (marks >= 90) ? 'A' :
            (marks >= 80) ? 'B' :
            (marks >= 70) ? 'C' :
            (marks >= 60) ? 'D' : 'F';

    if (grade == 'X')
        printf("Invalid input! Marks should be between 0 and 100.\n");
    else
        printf("Grade: %c\n", grade);
    return 0;
}
