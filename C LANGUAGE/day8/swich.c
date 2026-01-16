#include <stdio.h>

int main()
{

    int invoice, service;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice:");
    scanf("%d", &invoice);

    switch (invoice)
    {

    case 1:
        printf("Press 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n");
        printf("Enter your choice:");
        scanf("%d", &service);

            switch(service)
        {

        case 1:
        printf("you have secuusefully internet recharge\n");
        break;

        case 2:
        printf("you have secuusefully top-up recharge\n");
        break;

        case 3:
        printf("you have secuusefully special recharge\n");
        break;

        default:
        printf("invalid recharge\n");
        break;
        }

        break;

        case 2:
        printf("Internet recharge ke liye 1 dabaiye\n");
        printf("top-up recharge ke liye 2 dabaiye\n");
        printf("special recharg ke liye 3 dabaiye\n");
        printf("apna choice dijiye:");
        scanf("%d" ,&service);


         switch(service)
        {

        case 1:
        printf("apna safalta se internet recharge kar liya hai\n");
        break;

        case 2:
        printf("aapne safalta se top-up recharge kar liya hai\n");
        break;

        case 3:
        printf("aapne safalta se special recharge kar liya hai\n");
        break;

        default:
        printf("galat seva choice\n");
        break;
        }





        break;

        case 3:
        printf("Internet recharge mate 1 dabavo\n");
        printf("top-up recharge ke mate 2 dabavo\n");
        printf("special recharg ke mate 3 dabavo\n");
        printf("apna choice dijiye:");
        scanf("%d", &service);


         switch(service)
        {

        case 1:
        printf("Tamane safalta purvak internet recharge karyu che.\n");
        break;

        case 2:
        printf("Tamane safalta purvak Top-up recharge karyu che.\n");
        break;

        case 3:
        printf("Tamane safalta purvak special recharge karyu che.\n");
        break;

        default:
        printf("khotu service choice\n");
        break;
        }




        default:
        printf("invalid language");






    }

    return 0;
}