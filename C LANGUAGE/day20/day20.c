#include <stdio.h>

int main(){

   int i,size;

   printf("Enter the array's size :");
   scanf("%d", &size);

   int a[size];
   int *ptr=a;

   printf("Enter array's elements :\n");

    for (int i=0; i<size; i++)
    {
        printf("a[%d] =",i);
        scanf("%d", &a[i]);
    }

    printf("Square of each elements :\n");
    for (int i=0; i<size; i++)
    {
       printf("%d, ",(*(ptr+i))*(*(ptr+i)));
    }

    return 0;
}