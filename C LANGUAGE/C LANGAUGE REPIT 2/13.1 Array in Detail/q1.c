#include <stdio.h>

int main()
{
    int num;

    printf("Enter array size: ");
    scanf("%d", &num);

    int arr[num];

    printf("Enter array elements: \n");
    for (int i=0; i<num; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    
    printf("Length of an Array: %d",num);

    return 0;
}