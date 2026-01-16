#include <stdio.h>
int main()
{
    

    int radius;
    printf("Enter the radius of the circle:  ");
    scanf("%d", & radius);
    int square = radius*radius;
    printf("The area of the circle with radius %d is %d\n", radius , square);

    return 0;
}