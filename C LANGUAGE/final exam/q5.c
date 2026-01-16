#include <stdio.h>

int main(){
    int i,j,n;
    printf("enter any number :");
    scanf("%d", &n);
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=i; j++)
            {
                printf("%d ", i*i);
            }
            printf("\n");
        }   
    return 0;
}