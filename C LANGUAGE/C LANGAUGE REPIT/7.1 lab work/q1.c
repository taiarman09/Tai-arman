#include <stdio.h>


int main(){

    int i,a,b;

    printf("Enter First Number :");
    scanf("%d", & a);


    printf("Enter Secound Number :");
    scanf("%d", & b);


    if (a<b)
    {
        printf("The Minimun value is : %d",a);
    }
    else{
        printf("The minimum value is : %d",b);
    }
    


    return 0;
}