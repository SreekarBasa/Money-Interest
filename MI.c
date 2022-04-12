#include <stdio.h>
#include <math.h>
int main()
{
 float a,r,t,i ;
 printf("Enter the amount of money deposited :");
 scanf("%f",&a) ;
 printf("Enter the rate of interest offered by the bank:");
 scanf("%f",&r) ;
 printf("Enter the time period of deposition:");
 scanf("%f",&t) ;
 i = a*t*r*0.01 ; //incurrent interest-->i//
 printf("The incurred interest : %.2f \n",i);
 a = a+i ;
 printf("Total amount :%.2f",a);
 return 0;
}

 