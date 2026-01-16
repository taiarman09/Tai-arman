#include <stdio.h>

int main()
{

    int num,i=2;

    printf("Enter any number: ");
    scanf("%d", &num);

    do
    {
        printf("%d ", i);
        i+=2;
    } while (i<=num);

    return 0;
}