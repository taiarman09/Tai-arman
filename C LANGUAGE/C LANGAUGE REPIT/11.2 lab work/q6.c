// #include <stdio.h>

// int main(){

//     int n=5;


//     for (int i=n; i>=1; i--)
//     {
//        for (int k=n; k>=i; k--)
//        {
//         printf(" ");
//        }
//        for (int j=n; j>=n-i+1; j--)
//        {
//         printf("%d",j);
//        }
       
//        printf("\n");
//     }
    





//     return 0;
// }


#include <stdio.h>

int main(){


     int i,n=5;

     for (int i=n; i>=1; i--)
     {
        for (int k=n; k>=i; k--)
        {
           printf(" ");
        }
        for (int j=n; j>=n-i+1; j--)
        {
           printf("%d",j);
        }
        printf("\n");
        
     }

    return 0;
}