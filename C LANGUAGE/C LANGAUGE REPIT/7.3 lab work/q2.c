// #include <stdio.h>

// int main(){

//     int i,n;

//     printf("Press 1 for English\n");
//     printf("Press 1 for hindi\n");
//     printf("Press 1 for gujrati\n");
//     printf("enter any number :");
//     scanf("%d", &i);


//     printf("\n");

//     switch (i)
//     {
//     case  1:
//        printf("press 1 for internet recharge\n");
//        printf("press 1 for top-up recharge\n");
//        printf("press 1 for special recharge\n");
//        printf("enter any number :");
//        scanf("%d", &n);


//        printf("\n");
       

//         switch (n)
//         {
//         case 1:printf("you have succesfully internet recharge");break;
//          case 2:printf("you have succesfully top-up recharge");break;
//           case 3:printf("you have succesfully special recharge");break;
           
//         default:
//         printf("invalid recharge");
//             break;
//         }
        
//         printf("\n");


//         break;


//         case 2:
//         printf("internet rechaege ke liye 1 dabaiye \n");
//         printf("top-up rechaege ke liye 1 dabaiye \n");
//         printf("special rechaege ke liye 1 dabaiye \n");
//         printf("tamari pasand kareli sankhya :");
//         scanf("%d",&n);

//         printf("\n");

//         switch (n)
//         {
//         case 1: printf("internet seva safalta purvak aavi gyi chhe\n"); break;
//         case 2: printf("top-up seva safalta purvak aavi gyi chhe\n"); break;
//         case 3: printf("special seva safalta purvak aavi gyi chhe\n"); break;
        
//         default:
//             break;
//         }

        
        
//     default:
//         break;
//     }


//     return 0;
// }




#include <stdio.h>

int main(){

    int i,n;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujrati\n");
    printf("Enter your choice :");
    scanf("%d", &n);

    printf("\n");

    switch (n)
    {
    case 1:
        printf("Press 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n");
        printf("Enter your choice :");
        scanf("%d", &i);
        // break;

        printf("\n");

        switch (i)
        {
        case 1:
            printf("You have Succesfully done a Internet Recharge");
            break;
            case 2:
            printf("You have Succesfully done a Top-up Recharge");
            break;
            case 3:
            printf("You have Succesfully done a Special Recharge");
            break;
            case 4:
            printf("Invalid For Recharge. Please Try Again!");
            break;
        
        default:
            break;
        }
        
        break;
        
        case 2: 
            printf("Internet Recharge Ke Liye 1 Dabaye\n");
            printf("Top-up Recharge ke Liye 2 Dabaye\n");
            printf("Special Recharge ke Liye 3 Dabaye\n");
            printf("Apni Pasand Darj Kare :");
            scanf("%d", &i);

            printf("\n");

            switch (i)
            {
            case 1:
                printf("Apna Saflta Purvak Internet Recharge Kar Liya Hai");
                break;
                case 2:
                printf("Apna Saflta Purvak Top-up Recharge Kar Liya Hai");
                break;
                case 3:
                printf("Apna Saflta Purvak Special Recharge Kar Liya Hai");
                break;
                case 4:
                printf("Recharge Ke Liye Asamany Kurpya Pun:Pryas Kare");
                break;
            
            default:
                break;
            }


            break;

            case 3:
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("tamari pasandgi dakhal karo :");
            scanf("%d", &i);

            switch (i)
            {
            case 1:
               printf("Tame Safalta Purvak Internet Recharge Karyu Chhe.");
                break;
                case 2:
               printf("Tame Safalta Purvak Top-up Recharge Karyu Chhe.");
                break;
                case 3:
               printf("Tame Safalta Purvak Special Recharge Karyu Chhe.");
                break;
                case 4:
               printf("Recharge Mate Amany. Kurpa Karine Fari Pryas Karo");
                break;
            
            default:
                break;
            }


    default:
        break;
    }


    return 0;
}