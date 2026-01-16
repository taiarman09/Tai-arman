#include <stdio.h>

int main()
{
    int n1,n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the secound number: ");
    scanf("%d", &n2);


    while (n1 <=n2)
    {
       if (n1 % 4 ==0 )
       {
        printf("%d  ",n1);
       }
       n1++;

    }
    

    return 0;
    
}