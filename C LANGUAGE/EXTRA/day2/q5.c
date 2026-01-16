#include <stdio.h> 

int main(){

    int s,i=1;

    printf("enter any number :");
    scanf("%d", &s);


    while (i<=s)
    {
        printf("%d ", i);
        i++;
    }
    

    return 0;
}