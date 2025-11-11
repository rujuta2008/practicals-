#include<stdio.h>
int main()
{
int i,n,t;
for(i=0;i<=21;i--)
{
    printf("\nenter your number between 1 10 4");
    scanf("%d",&n);
    i=5-n;
    printf("\ncomputer will enter %d",i);
    t=t-(i+n);
    printf("\nthe remaining are %d",t);
    if(t==1)
    {
        printf("\nyou lose");
        break;
    }}
}


