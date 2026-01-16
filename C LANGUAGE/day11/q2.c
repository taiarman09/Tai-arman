// #include <stdio.h>

// int main()
// {

// int i,n,value=1;


// printf("enter any number:");
// scanf("%d", &n);


// for (i=1; i<=n; i++)
// {
//    value*=i;
// }

// printf("the facrorial is :%d",value);


//     return 0;
// }




#include <stdio.h>

int main()
{

    int i,n,value=1;


    printf("enter your number:");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        value*=i;
    }
    printf("your value is :%d",value);



    return 0;
    
}