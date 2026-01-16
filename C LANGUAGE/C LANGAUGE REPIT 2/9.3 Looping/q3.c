#include <stdio.h>

int main()
{

    int num, reslut,n=10;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i=1; i<=n; i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }
    

    return 0;
}