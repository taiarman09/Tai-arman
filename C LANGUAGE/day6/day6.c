#include <stdio.h>

int main()
{
    int num1;
    printf("enter your first number");
    scanf("%d", & num1);
    int num2;
    printf("enter your second number");
    scanf("%d", & num2);

    if(num1>num2){
        printf("value of min = %d",num2);
    }

        return 0;
}