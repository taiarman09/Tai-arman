#include <stdio.h>

int main()
{

    int num, result = 0, i;

    printf("Enter array size: ");
    scanf("%d", &num);

    int a[num], b[num], c[num];

    printf("Enter array A's elements: \n");
    for (int i = 0; i < num; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter array B's elements: \n");
    for (int i = 0; i < num; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
        c[i] = a[i] + b[i];
    }

    printf("\nArray C is:\n");
    for (i = 0; i < num; i++)
    {
        printf("a[%d] = %d \n", i, c[i]);
    }

    return 0;
}