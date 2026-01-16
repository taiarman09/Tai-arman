#include <stdio.h>

int main()
{

    int i, j, k, l,p, n = 5;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int k = n; k > i; k--)
        {
            printf(" ");
        }
        for (int p = i; p<n; p++)
        {
            printf(" ");
        }
        for (int l = i; l >= 1; l--)
        {
            printf("%d", l);
        }

        printf("\n");
    }

    return 0;
}