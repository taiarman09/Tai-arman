#include <stdio.h>

int main(){


   int i,n,a,b;


   printf("Enter any First Number: ");
   scanf("%d", &a);


   printf("Enter any secound Number: ");
   scanf("%d", &b);


   while (a<=b)
   {
      if (a%4 ==0)
      {
         printf("%d ",a);
      }
      a++;
   }
   
   


   return 0;
}