#include <stdio.h>

int main()
{
    int principle;
    int rate;
    int time;

    printf("enter the principle value:");
    scanf("%d", & principle);

    printf("enter the rate value:");
    scanf("%d", & rate);

    printf("enter the time value:");
    scanf("%d", & time);

    float result = principle*rate*time / 100.0;
    printf("the result of simple intrest: %f", result);



    return 0;
}