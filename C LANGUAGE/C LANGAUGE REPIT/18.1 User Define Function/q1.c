#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    int result = num * num * num;

    printf("Cube is: %d", result);

    return 0;
}