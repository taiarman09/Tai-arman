#include  <stdio.h>

int main(){

    int i,n;
    int arrays[100];
    int *pointer;


    printf("enter any number :");
    scanf("%d", &n);

    printf("your value is %d",n);

    for (int i=0; i<n; i++)
    {
       scanf("%d", &arrays[i]);
    }

    pointer = arrays;


    for (int i=0; i<n; i++)
    {
        printf("%d 2 =%d\n", *(pointer + i), (*(pointer+i)*(*(pointer)) ));
    }
    
    



    return 0;
}








// #include <stdio.h>

// int main() {
//     int arr[100], n, i;
//     int *ptr;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     ptr = arr;  // Pointer points to first element of array

//     // Calculate and print the square of each element
//     printf("Squares of the array elements:\n");
//     for (i = 0; i < n; i++) {
//         printf("%d^2 = %d\n", *(ptr + i), (*(ptr + i)) * (*(ptr + i)));
//     }

//     return 0;
// }
