// #include <stdio.h>

// int main(){

//     int n=5;

//     for (int i=n; i>=1; i--)
//     {
//         for (int j=1; j<=i; j++)
//         {
//             printf("%d",j);
//         }
        
//         printf("\n");
//     }
    

//     return 0;
// }




#include <stdio.h>

int main(){

    int n=5;

    for (int i=n; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        for (int k=1; k<=(n-i)*2; k++)
        {
            printf(" ");
        }
        for (int p=i; p>=1; p--)
        {
            printf("%d",p);
        }
        
        printf("\n");
    }
    

    return 0;
}