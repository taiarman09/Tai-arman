#include <stdio.h>
int main(){
    
    int i,j,k,n=5;

    for (int i=1; i<=n; i++)
    {
        for (int k=1; k<=i; k++)
        {
            printf(" ");
        }
        
        for (int j=i; j<=n; j++)
        {
            printf("%d",(j+i)%2);
        }
        printf("\n");
    }
    
    



    return 0;
}