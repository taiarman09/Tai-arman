#include <stdio.h>

int main()
{

    int i, j, k, n = 5;

    for (int i=n; i>=1; i--)
    {
        for (int k=n; k>=i; k--)
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