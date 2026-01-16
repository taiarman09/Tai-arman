#include <stdio.h>

int main(){

    int size;

    printf("Enter array's size:");
    scanf("%d", &size);


    int  a[size];


    printf("enter your elements:\n");
    for (int i=0; i<size; i++)
    {
       printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

     printf("enter your negative:\n");
    for (int i=0; i<size; i++)
    {
       if (a[i]<0)
       {
        printf("%d ",a[i]);
       }
    }


    return 0;
}