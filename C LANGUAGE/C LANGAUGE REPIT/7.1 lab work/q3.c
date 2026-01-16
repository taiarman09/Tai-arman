#include <stdio.h>

int main(){


    float maths,english,science;


    printf("Enter maths marks: ");
    scanf("%f", &maths);

    printf("Enter english marks: ");
    scanf("%f", &english);

    printf("Enter science marks: ");
    scanf("%f", &science);


    float result= (maths+english+science)/3;

    printf("average mark : %f",result);

    return 0;
}