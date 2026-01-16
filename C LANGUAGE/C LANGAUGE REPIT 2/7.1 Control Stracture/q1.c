#include <stdio.h>

int main(){

    int num1,num2;

    printf("Enter a value of the first number: ");
    scanf("%d", &num1);
    printf("Enter a value of the secound number: ");
    scanf("%d", &num2);


    if (num1>num2)
    {
       printf("The minimum value is: %d",num2);
    }
    else{
        printf("The minimum value is: %d",num1);
    }
    


    return 0;
}