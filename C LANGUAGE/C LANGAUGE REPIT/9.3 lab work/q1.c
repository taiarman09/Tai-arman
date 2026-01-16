#include <stdio.h>

int main(){

    int i,n,sum=0;


    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        sum +=i;
    }


    printf("The sum of all number: %d\n",sum);
    


    return 0;
}