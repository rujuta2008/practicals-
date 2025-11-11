#include<stdio.h>
int main()
{
    int i,j,a[25],p=0,n=0,o=0,e=0;
    printf("enter the 25 number");
    for(i=0;i<25;i++)
    {
        scanf("%d",&a[i]);
    }for(i=0;i<25;i++)
        if(a[i]<0)
        {
            n++;

        }
        else
        {
            p++;
        }
       for(i=0;i<25;i++)
        {
            if (a[i]%2==0)
            {
            o++;

            }
        else
            {
           e++;
            }
       }
       printf("positive %d\n",p);
        printf("negative %d\n",n);
        printf("even %d\n",o);
        printf("odd %d\n",e);
      return 0;


}
