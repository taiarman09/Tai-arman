#include <stdio.h>

int main()
{

    int a, b;

    printf("press 1 for english\n");
    printf("press 2 for hindi\n");
    printf("press 3 for gujrati\n");
    printf("enter your choice :");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Press 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n");
        printf("enter your choice :");
        scanf("%d", &b);
        

        switch (b)
        {
        case 1:
            printf("your sucecfully internet recharge\n");
            break;

            case 2:
            printf("your sucecfully top-up recharge\n");
            break;

            case 3:
            printf("your sucecfully special recharge\n");
            break;
        
        default:
        printf("invalid recharge");
            break;
        }



        case 2:
        printf("internet recgharge ke liye 1 dabye\n");
        printf("tou-up recharge ke liye 2 dabaye\n");
        printf("special recharge ke liye 3 dabaye\n");
        printf("your choice is  :");
        scanf("%d", &b);
        

        switch (b)
        {
        case 1:
            printf("aapka safalta purvak internet recharge ho gya hai\n");
            break;

            case 2:
            printf("aapka safalta purvak top-up recharge ho gya hai\n");
            break;

            case 3:
            printf("aapka safalta purvak special recharge ho gya hai\n");
            break;
        
        default:
        printf("invalid recharge");
            break;
        }break;

         case 3:
        printf("internet recharge ke liye 1 dabavo.\n");
        printf("yop-up recharge ke liye 2 dabavo.\n");
        printf("special recharge ke liye 3 dabavo.\n");
        printf("enter your choice :");
        scanf("%d", &b);
        

        switch (b)
        {
        case 1:
            printf("tamaru internet recharge safalta purvak\n");
            break;

            case 2:
            printf("tamaru top-up recharge safalta purvak\n");
            break;

            case 3:
            printf("tamaru special recharge safalta purvak\n");
            break;
        
        default:
        printf("invalid recharge");
            break;
        }break;




    default:
    printf("invalid recharge");
        break;
    }

    return 0;
}