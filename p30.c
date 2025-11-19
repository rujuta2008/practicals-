#include<stdio.h>
 int main()
 {
     int n,i,j;
     float price[5],temp;
     printf("enter number of iteams:");
     scanf("%d",&n);
     if(n<=0)
     {
         printf("error:no iteam to short.\n");
         return 0;

     }
      printf("enter the prices:");
      for(i=0;i<n;i++)
      {
          if(scanf("%f",&price[i])!=1)
          {
              printf("error:invalide input for price.please enter numerical value");
            return 0;

          }


      }
      for(i=0;i<n-1;i++)
      {
          for(j=i+1;j<n;j++)
          {
              if((price+i)>(price+j))
              {
                  temp=*(price+i);
                (price+i)=(price+j);
                *(price+j)=temp;
              }
          }
      }
      printf("sorted price:");
      for(i=0;i<n;i++)
      {
          printf("%f",*(price+i));
      }
       printf("\n");
       return 0;

 }
