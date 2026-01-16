#include <stdio.h>


int main(){


    int i,n;

    printf("enter any number :");
    scanf("%d", &n);


    if (n<0)
    {
        printf("The number is Negative");
    }else if (n==0)
    {
        printf("The number is netural");
    }
    else{
        printf("The number is positive");
    }
    
    

    return 0;
}