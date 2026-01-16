#include <stdio.h>

int main(){

    char word[100];
    int i;


    printf("Enter any string: ");
    gets(word);

    for (int i=0; word[i] !='\0'; i++)
    {
        if (word[i]>='A' && word[i]<='Z')
        {
            word[i]=word[i]+32;
        }
        
    }
    
printf("Lowercase string: %s",word);


    return 0;
}