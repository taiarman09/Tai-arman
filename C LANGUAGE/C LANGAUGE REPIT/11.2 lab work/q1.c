#include <stdio.h>

int main(){

    int i,n=5;


    for (int i=1; i<=n; i++)
    {
        for (int k=i; k<=n; k++)
        {
            printf(" ");
        }
        for (int j=i; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    


    return 0;
}