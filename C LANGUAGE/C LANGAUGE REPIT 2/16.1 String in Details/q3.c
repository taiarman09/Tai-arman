#include <stdio.h>

int main()
{

    int i;
    char str[100];

    printf("Enter aby string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Toggle case string: %s",str[i]);

    return 0;
}