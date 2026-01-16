
#include <stdio.h>

void cube(int i){

    if (i%3==0 && i%5==0)
    {
        printf("The given number is divisible by both 3 & 5."); 
    }else{
         printf("The given number is not divisible by both 3 & 5."); 
    }
    
}

int main(){

    int i;

    printf("enter any number :");
    scanf("%d", &i);


        cube(i);
    


    return 0;
}