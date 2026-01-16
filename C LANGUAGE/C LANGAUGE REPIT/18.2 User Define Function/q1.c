#include <stdio.h>

int main()
{

    int num, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &num);

    int arr[num];

    printf("Enter array elements: \n");

    for (int i = 0; i < num; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    printf("The sum of an Array: %d", sum);

    return 0;
}