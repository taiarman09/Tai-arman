#include <stdio.h>

int main()
{
    int num, result=0;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++)
    {
        result=result+i;
    }
    

    printf("The sum of all numbers: %d", result);

    return 0;
}