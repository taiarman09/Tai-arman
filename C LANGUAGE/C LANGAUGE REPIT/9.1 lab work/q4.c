// #include <stdio.h>

// int main(){

//     int i,n;

//     printf("Enter any number :");
//     scanf("%d", &n);

//     if (n%2 ==0)
//     {
//        n--;
//     }
    

//     while (n>=1)
//     {
//        printf("%d ", n);
//        n-=2;
//     }
    


//     return 0;
// }

#include <stdio.h>


int main(){


   int i=15,n;

   printf("Enter any number: ");
   scanf("%d", &n);


   while (i>=1)
   {
    if (i%2 !=0)
    {
       printf("%d ", i);
    
    }
     i--;
   }
   


   return 0;
}