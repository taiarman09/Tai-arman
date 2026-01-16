#include <stdio.h>


void sum1(int number){

    int result=number*number*number;
    printf("cube is : %d",result);
}

int main(){

    int number;

    printf("enter any number :");
    scanf("%d", & number);

    sum1(number);
    return 0;
}