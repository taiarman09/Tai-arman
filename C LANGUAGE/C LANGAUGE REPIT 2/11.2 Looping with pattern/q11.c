#include <stdio.h>

int main()
{
    int i, k, j, n = 5;

    for (int i=1; i<=n; i++)
    {
        for (int k=n; k>=i; k--)
        {
            printf(" ");
        }
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        for (int j=i-1; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}