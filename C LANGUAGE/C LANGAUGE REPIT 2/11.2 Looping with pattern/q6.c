#include <stdio.h>

int main()
{
    int i, k, j, n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k >= 1; k--)
        {
            printf(" ");
        }

        for (int j = n; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}