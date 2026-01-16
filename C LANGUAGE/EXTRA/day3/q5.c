#include  <stdio.h>

int main(){


    int i,n;

    for (int i=1; i<=5; i++)
    {
       for (int j=5; j>=i; j--)
       {
        printf("%d",i);
       }
       printf("\n");
    }
    

    return 0;
}