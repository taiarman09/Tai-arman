#include <stdio.h>

int main()
{
    int i, size, sum;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size], b[size], c[size];

    printf("Enter array A's elements: \n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter array B's elements: \n");
    for (int i = 0; i < size; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < size; i++)
    {
        c[i] = a[i] + b[i];
    }
    printf("Array C is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", c[i]);
        if (i < size - 1)
            printf(", ");
    }

        return 0;
}