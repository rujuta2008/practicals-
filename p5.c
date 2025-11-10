#include<stdio.h>
int main() {
    
float overall = 1441981744;
float women = (62.84/100)*overall;
float men =overall-women;
 printf("number of men is %f\n",men);
 printf("the number of women is %f\n",women);
 float litracy_population = (85.95/100)*overall;
 printf("the number of litracy population is %f\n",litracy_population);
 printf("the number of litracy women is %f\n",(80.95/100)*litracy_population);
 printf("the number of litracy men is %f\n",(62.84/100)*litracy_population);
 float illitracy_population = overall - litracy_population;
 printf("the number of illitracy population is %f\n",illitracy_population);
 printf("the number of illitracy population in men is %f\n",(100-62.84)/100*illitracy_population);
 printf("the number of illitracy population in women is %f\n",(100-80.95)/100*illitracy_population);
 return 0;
}