#include <stdio.h>

int main()
{
    int number,a=0,b=1,c;

    printf("Enter any number: ");
    scanf("%d", &number);

    printf("%d %d ", a, b);


    for (int i=2; i<number; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    



    return 0;
}