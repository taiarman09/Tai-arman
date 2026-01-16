#include <stdio.h>

int main()
{

    int a,b,c;


    printf("enter your first number:");
    scanf("%d", &a);

    printf("enter your secound number:");
    scanf("%d", &b);

    printf("enter your third number:");
    scanf("%d", &c);

    (a > b)? printf("a is geter then both b and c") :  (b > c)? printf("b geter than both a and c ") : printf("c is geter than both a and b");




    return 0;
}