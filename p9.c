#include<stdio.h>
int main()
{
    float tamount,discount,famount;
    printf("Enter the total amount");
    scanf("%f",&tamount);
    if(tamount<1000)
    {
        printf("You will not get any discount");
    }
    else if(tamount>1000 && tamount<5000)
     {
         discount=tamount*0.1;
        famount=tamount-discount;

     }
    else
    {
        discount=tamount*0.2;
        famount=tamount-discount;}
    printf("The totalamount is %f\n",tamount);
    printf("The discount is %f\n",discount);
    printf("The finalamount is %f\n",famount);
      return 0;
}
