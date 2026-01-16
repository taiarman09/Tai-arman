#include <stdio.h>

int main()
{


    int i=2,n;
    printf("enter your number");
    scanf("%d", &n);


    do
    {
       printf("%d ",i);

       i+=2;
    } while (i<=n);
    
      



    return 0;
}