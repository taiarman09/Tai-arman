#include <stdio.h>

int main()
{

    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("This number is Negagtive");
    }
    else if (num == 0)
    {
        printf("This number is Neutral");
    }
    else
    {
        printf("This number is Positive");
    }

    return 0;
}