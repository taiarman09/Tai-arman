#include <stdio.h>

void reverse(char start[]){

    int i=0,n=0;
    char character;

    while (start[n] !='\0')
    {
        n++;
    }
    
    n--;

    while (i<n)
    {
       character = start[i];
        start[i] = start[n];
        start[n] = character;
        i++;
        n--;
    }
    
}



int main(){


    char i[100];

    printf("enter any word :");
    scanf("%s", i);

    reverse(i);

    printf("Reverseh word: %s", i);


    return 0;
}   