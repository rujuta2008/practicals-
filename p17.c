#include<stdio.h>
#include<unistd.h>
void main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        printf("Minute %d:Distance covered=%f KM \n",i,i*0.5);
        sleep(1);
    }
    printf("marathon complete!!");
}





