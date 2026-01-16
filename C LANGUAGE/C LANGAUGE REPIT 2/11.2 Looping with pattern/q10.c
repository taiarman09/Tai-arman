#include <stdio.h>

int main()
{
    int i, j, k, n = 5;

    for (int i = 1; i<=n; i++)
    {
        for (int k=i; k<=n; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }
        
        printf("\n");
    }

    return 0;
}