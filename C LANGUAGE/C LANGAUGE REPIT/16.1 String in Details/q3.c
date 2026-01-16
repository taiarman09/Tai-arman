#include <stdio.h>

int main()
{

    char word[100];
    int i;

    printf("Enter any string: ");
    gets(word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
            word[i] = word[i] - 32;
        else if (word[i] >= 'A' && word[i] <= 'Z')
            word[i] = word[i] + 32;
    }
    printf("Toggle case string: %s", word);

    return 0;
}