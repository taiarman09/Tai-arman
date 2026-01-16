#include <stdio.h>   

int main(){

    int a,b,c;

    printf("enter any first number : ");
    scanf("%d", &a);
    printf("enter any secound number : ");
    scanf("%d", &b);
    printf("enter any third number : ");
    scanf("%d", &c);


    if (a<b)
    {
        if (a<c)
        {
           printf("the minimun value is : %d",a);
        }
        else{
             printf("the minimun value is : %d",c);
        }
    }
    else{
        if (b<c)
        {
           printf("the minimun value is : %d",b);
        }
        else{
             printf("the minimun value is : %d",c);
        }
        
    }
    


    return 0;
}