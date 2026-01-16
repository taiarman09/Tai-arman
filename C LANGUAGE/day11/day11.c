#include <stdio.h>

int main()
{

int i,n,value=0;

printf("enter your value:");
scanf("%d", &n);

for (i=1; i<=n; i++)
{
 value += i; 
}

printf("The Sum Of all number: %d",value);



    return 0;
}