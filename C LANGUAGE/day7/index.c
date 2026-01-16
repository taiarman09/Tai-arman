#include <stdio.h>

int main()
{

    int a,b,c;
    printf("Enter A value Of The First Number");
    scanf("%d", &a);
    printf("Enter B value Of The Secound Number");
    scanf("%d", &b);
    printf("Enter C value Of The Third Number");
    scanf("%d", &c);


    if (a < b)
    {
        if(a < c)
        {
            printf("The First   Number Is The Minimum Number: %d\n",a);
        }
        else
        {
            printf("The First Number Is The Minimum Number: %d\n",c);
        }
    }
    else
    {
        if( b < c)
        {
            printf("the secound Number Is The Minimum number: %d\n",b);
        }
        else
        {
            printf("The Third Number Is The Minimum Number: %d",c);
        }
    }
    


    return 0;
}