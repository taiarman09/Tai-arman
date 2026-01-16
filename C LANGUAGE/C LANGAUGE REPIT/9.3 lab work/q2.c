#include <stdio.h>

int main(){


    int i,n,number=1;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        number*=i;
    }


    printf("The factorial is: %d", number);
    



    return 0;
}