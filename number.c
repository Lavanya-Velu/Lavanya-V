#include<stdio.h>
int main()
{
   int number;
   scanf("%d",&number);
   if(number<0)
       printf("Number is negative");
   else if(number>0)
       printf("Number is positive");
   else
       printf("Number is zero");
   return 0;
   }
