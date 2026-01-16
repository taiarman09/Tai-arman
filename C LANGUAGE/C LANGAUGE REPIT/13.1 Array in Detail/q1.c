#include <stdio.h>

int main()
{
    int i, size, n = 5;

    printf("Enter arrays size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements: \n");
    for (int i=0; i<size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[size]);
    }

    printf("Lenght of an Array: %d",size);

    return 0;
}