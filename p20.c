#include<stdio.h>
int main()
{
    int i,j,ID,suma=0,sumb=0,tsum;
    int a[10],b[9];
    printf("enter your ID");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        suma=suma+a[i];
    }
printf("enter the id at the last");
    for(i=0;i<9;i++)
    {
        scanf("%d",&b[i]);
        sumb=sumb+b[i];
    }
    tsum=suma-sumb;+
    printf("the nissing one is %d",tsum);
    return 0;
}
