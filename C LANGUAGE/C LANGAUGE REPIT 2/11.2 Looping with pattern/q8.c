#include <stdio.h>

int main()
{
    int i, j, k, n = 5;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int k = n-1; k >= i; k--)
        {
            printf(" ");
        }
        for (int k = n-1; k >= i; k--)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int k = n-1; k >= i; k--)
        {
            printf(" ");
        }
        for (int k = n-1; k >= i; k--)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}