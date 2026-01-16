#include <stdio.h>

int main()
{

    int num1, num2, num3, num4;

    printf("Enter a value of the first number: ");
    scanf("%d", &num1);
    printf("Enter a value of the secound number: ");
    scanf("%d", &num2);

    printf("Enter a value of the third number: ");
    scanf("%d", &num3);
    printf("Enter a value of the four number: ");
    scanf("%d", &num4);

    int max = num1;

    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num4 > max)
    {
        max = num4;
    }

    printf("The maximum value is: %d\n", max);

    return 0;
}