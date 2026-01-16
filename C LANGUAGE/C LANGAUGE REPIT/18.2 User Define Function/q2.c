#include <stdio.h>

int findlength()
{
    int i;
    char str[100];
    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[100];

    printf("Enter any string: ");
    gets(str);

    int length = findlength(str);

    printf("Length is: %d\n", length);

    return 0;
}