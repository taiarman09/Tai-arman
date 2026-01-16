#include <stdio.h>

int main()
{
    char word[100];
    int i;

    printf("Enter any srting: ");
    gets(word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = word[i] - 32;
        }
    }

    printf("Uppercase string: %s", word);
    return 0;
}