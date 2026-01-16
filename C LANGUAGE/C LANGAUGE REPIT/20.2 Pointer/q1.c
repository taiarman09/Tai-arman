#include <stdio.h>

int main()
{

    int num;

    printf("Enter the array's size: ");
    scanf("%d", &num);

    int arr[num];
    int *p = arr;
    int **pp = &p;

    printf("Enter array elements: \n");

    for (int i = 0; i < num; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num; i++)
    {
        *(*pp + i) = *(*pp + i) * *(*pp + i);
    }

    printf("\nReversed array elements:\n");
    for (int i = num - 1; i >= 0; i--)
    {
        printf("%d ", *(*pp + i));
    }

    return 0;
}