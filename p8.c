#include<stdio.h>
int main()
{
    int age;
    for(int i=1; i<=5; i++)
    {
        printf(" user %d: Enter your age: ",i);
        scanf("%d", &age);
        if(age<=0)
        {
            printf("envalid age\n");
        }
        else if (age<18)
        {
            printf("you are not eligible for opening an account");

        }
        else
        {
        printf(" you are eligible for opening an account");
        if (age<60)
        { 
            printf(" you are eligible for opening an saving account");
        }
        else 
        { 
            printf(" you are eligible for opening a senior citizen account");
        }
      
        }
     }
    
}