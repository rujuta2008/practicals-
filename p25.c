#include<stdio.h>
void Displaybooks();
int Totalbooks();


main()
{
    int choice;
    printf("\n1. avaiable books ");
    printf("\n2. total number of books");
    printf("\n3. borrow a book");
    printf("\n4. calculate the fine for overdue books");
    printf("\n5. exit");

    printf("\nenter ypur choice");
    scanf("%d",&choice);

    switch(choice)
    {

     case 1:
        {
            Displaybooks();
            break;

        }
     case 2:
        {
            printf(" total number of books is %d",Totalbooks());;
            break;

        }




    }





}
void Displaybooks()
{
    printf("\n----Avaiable books------");
    printf("\n1. c lauguage");
    printf("\n2. V K  mehta");
    printf("\n3. H K daas");
    printf("\n4. enginnering mathematics");
}
int Totalbooks()
{
   return 4;
}


