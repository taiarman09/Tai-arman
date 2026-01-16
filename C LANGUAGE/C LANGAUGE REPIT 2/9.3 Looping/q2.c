#include <stdio.h>

int main(){

    int num,reslut=1;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++)
    {
        reslut=reslut*i;
    }

    printf("The factorial is: %d", reslut);
    


    return 0;
}