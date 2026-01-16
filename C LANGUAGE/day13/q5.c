#include <stdio.h>
int main()
{
    int n=5;


    for (int i=n; i>=1; i--)
    {
        for (int j=i; j<n; j++)
        {
           printf(" ");
        }
        for (int k=i; k>=1; k--)
        {
         printf("%d",k);
        }
        printf("\n");
        
    }
    





    return 0;
}