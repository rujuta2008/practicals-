#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age<12){
        printf("free entry\n");
    }
    else{
        printf("entry fees = 100Rs\n");
    }
        return 0;

}