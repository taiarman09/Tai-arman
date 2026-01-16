#include <stdio.h>

int main(){

    int radius;


    printf("Enter Array Size: ");
    scanf("%d", &radius);

    int a[radius];
    float number =0;

    for (int i=0; i<radius; i++){
        printf("a[%d]=" ,i);
        scanf("%d", &a[i]);
        number +=a[i];
    }

    float value = number/radius;

    printf("Average  of an Array :%f",value);

    return 0;
}
