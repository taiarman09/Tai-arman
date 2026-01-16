#include <stdio.h>
int main()
{

    int n=5;


    
    for (int i=5; i>=1; i--)
    {
        for (int k=1; k<i; k++)
        {
          printf(" ");
        }
        for (int j=i; j<=5; j++)
        {
             printf("%d",i);
        }
        
        printf("\n");
    }
    



    return 0;
}