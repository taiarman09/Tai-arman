#include <stdio.h>

int main(){

    int i,size;
    float result,sum=0;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements: \n");
    for (int i=0; i<size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
     result=sum/size;
    printf("Average of an Array: %f",result);
    

    return 0;
}