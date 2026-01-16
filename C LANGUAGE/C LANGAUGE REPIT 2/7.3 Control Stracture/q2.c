#include <stdio.h>

int main()
{
    int choice;

    printf("Press 1 for English \n");
    printf("Press 2 for Hindi \n");
    printf("Press 3 for Gujrati \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nPress 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("You have successfully done a Internet Recharge");
            break;
        case 2:
            printf("You have successfully done a Top-up Recharge");
            break;
        case 3:
            printf("You have successfully done a Special Recharge");
            break;

        default:
            break;
        }
        break;
    case 2:
        printf("\nInternet Recharge ke liye 1 dabaiye\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf("Special Recharge ke liye 3 dabaiye\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Aapka safaltapurvak Internet Recharge kar liya hai.");
            break;
        case 2:
            printf("Aapka safaltapurvak Top-up Recharge kar liya hai.");
            break;
        case 3:
            printf("Aapka safaltapurvak Special Recharge kar liya hai.");
            break;

        default:
            break;
        }
        break;

    case 3:
        printf("\nInternet Recharge mate 1 dabavo\n");
        printf("Top-up Recharge mate 2 dabavo\n");
        printf("Special Recharge mate 3 dabavo\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Tame safltapurvak Internet Recharge karyu chhe.");
            break;
        case 2:
            printf("Tame safltapurvak Top-up Recharge karyu chhe.");
            break;
        case 3:
            printf("Tame safltapurvak Special Recharge karyu chhe.");
            break;

        default:
            break;
        }
        break;
    default:
        break;
    }

    return 0;
}