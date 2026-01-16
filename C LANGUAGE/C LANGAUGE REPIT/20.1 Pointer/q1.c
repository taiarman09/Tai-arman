#include <stdio.h>

int main()
{

    int num;
    printf("Enter array's elements: ");
    scanf("%d", &num);

    int arr[num];
    int *ptr = arr;

    printf("Enter array's elements: \n");
    for (int i = 0; i < num; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d", (*(ptr + i)) * (*(ptr + i)));
        if (i < num - 1)
            printf(", ");
    }

    printf("\n");

    return 0;
}