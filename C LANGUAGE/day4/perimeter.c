#include <stdio.h>

int main()
{
    float PI =3.14;
    float radius;
    printf("Enter the radius of the circle:  ");
    scanf("%f",& radius);
    float area=2*PI*radius;
    printf("The area of the circle with radius %f is %f\n",radius,area);


    return 0;
}