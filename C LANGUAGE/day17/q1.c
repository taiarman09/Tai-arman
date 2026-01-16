#include <stdio.h>
#include <string.h>

int main(){

    char email[50],password[20];
    char currectemail[]="admin123@gmail.com";
    char currectpassword[]="972426";

    printf("enter our email :");
    scanf("%s", &email);

    printf("enter our password :");
    scanf("%s", &password);

    if (strcmp(email,currectemail)==0 && strcmp(password, currectpassword)==0)
    {
        printf("Login succesfully..\n");
    }else{
        printf("Login Faild. Please Try again");
    }
    




    return 0;
}