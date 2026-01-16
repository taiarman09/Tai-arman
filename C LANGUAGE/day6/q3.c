#include <stdio.h>

int main()
{
    float maths;
    printf("enter your maths mark");
    scanf("%f", & maths);

    float english;
    printf("enter your english mark");
    scanf("%f", & english);

    float science;
    printf("enter your science mark");
    scanf("%f", & science);

    float total=(maths+english+science)/3;
    printf("averange value is :%f",total);



    return 0;
}