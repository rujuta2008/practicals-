#include<stdio.h>
int main()
{
    int a[5][10]={0},r,c,k;
    int i,j,n;
    printf("Enter the no of reserved seats ");
    scanf("%d",&n);
   for(k=1;k<=n;k++){
    printf("enter the rows and seats you want to reserved seat %d\n",k);
    scanf("%d %d",&r,&c);

       a[r-1][c-1]=1;
   }
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
        if(a[i][j]==1)
            printf("X");
        else
            printf("0");
    }
    printf("\n");
    }


}
