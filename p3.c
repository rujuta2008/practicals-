#include<stdio.h>
int main()
{
    float w, h, bmi;

    printf("Enter weight in kg: ");
    scanf("%f", &w);
    printf("Enter height in meters: ");
    scanf("%f", &h);

    bmi = w / (h * h);

    printf("Your BMI is: %.2f\n", bmi);

    return 0;
}
