#include <stdio.h>

int main()
{
    int i, j, k, n = 5;

    for (int i = n; i >= 1; i--)
    {
        for (int k=i; k>=1; k--)
        {
            printf(" ");
        }
        
        for (int j = i; j <= n; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}