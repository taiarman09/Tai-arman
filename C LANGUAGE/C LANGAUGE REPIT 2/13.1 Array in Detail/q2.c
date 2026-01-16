#include <stdio.h>

int main()
{

    int num;
    float average,sum=0;

    printf("Enter array size: ");
    scanf("%d", &num);

    int arr[num];

    printf("Enter array elements: \n");
    for (int i = 0; i < num; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }

    average=sum/num;

    printf("Average of an Array: %.1f",average);

    return 0;
}