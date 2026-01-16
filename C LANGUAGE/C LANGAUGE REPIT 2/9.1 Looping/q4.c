#include <stdio.h>

int main()
{
    int i = 1,num;
    
    printf("Enter any number: ");
    scanf("%d", &num);

    while (num%2)
    {
        printf("%d ",i);
        i++;
    }
    

    return 0;
}





// #include <stdio.h>

// int main()
// {
//     int i = 1,num;
    
//     printf("Enter any number: ");
//     scanf("%d", &num);

//     if (num%2 ==0)
//     {
//         num=num-1;
//     }
//     while (num>=1)
//     {
//         printf("%d ", num);
//         num=num-2;
//     }
    
    
    

//     return 0;
// }