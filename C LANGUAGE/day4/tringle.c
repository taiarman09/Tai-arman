#include <stdio.h>

int main()
{
    int base;
    int width;
    printf("the traingle base is ");
    scanf("%d", & base);
    printf("the traingle width value");
    scanf("%d", & width);

    float value = 0.5*base*width;
    printf("the tringle value : %f",value);


    return 0;
}