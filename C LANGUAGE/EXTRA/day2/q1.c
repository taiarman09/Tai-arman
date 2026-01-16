#include <stdio.h>

int main(){

    int a,b,c,d,max;

   printf("your first value  :");
    scanf("%d", &a);

    printf("your secound value :");
    scanf("%d" ,&b);

    printf("your third value :");
    scanf("%d" ,&c);

    printf("your four value :");
    scanf("%d" ,&d);


    if (a>b)
    {
        if (a>c)
        {
           if (a>d)
           {
            max=a;
           }else{
            max=d;
           }
        }else{
            if (c>d)
            {
                max=c;
            }else{
                max=d;
            }
        }
    }else{
        if (b>c)
        {
            if (b>d)
            {
                max=b;
            }else{
                max=d;
            }
        }else{
            if (c>d)
            {
                max=c;
            }else{
                max=d;
            }
        }
    }

    printf("your value is maximum :%d",max);
    

    return 0;
}