#include <stdio.h>

int main()
{
    char string[80];
    char *pointer;
    int nayan = 0;


    printf("Enter a String: ");
    fgets(string, sizeof(string), stdin);


    pointer = string;
    while (*pointer   !='\0')
    {
        nayan++;
        pointer++;
    }


    if (nayan > 0 && string[nayan - 1] == '\n')
    {
        nayan--;
        printf("The length of a string is : %d", nayan);
    }
    
    return 0;
}