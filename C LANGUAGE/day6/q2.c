#include <stdio.h>

int main()
{
    int value;
    printf("enter your value :");
    scanf("%d", & value);

    if(value <0)
    {
        printf("your value is negative : %d", value);
    }
    
    else if(value==0)
    {
        printf("your value is nature : %d",value);
    }


    else if(value >0)
    {
        printf("your value is positive : %d", value);
    }





    return 0;
}