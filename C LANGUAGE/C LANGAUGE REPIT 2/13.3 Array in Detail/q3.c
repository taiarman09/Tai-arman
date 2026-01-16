#include <stdio.h>

int main()
{
    int size, sum = 0;

    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        sum += arr[i][size - 1 - i];
    }

    printf("The sum of diagonal elements of Array: %d", sum);

    return 0;
}