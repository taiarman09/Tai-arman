
#include <stdio.h>

int main(){

    int radius;


    printf("Enter Array Size: ");
    scanf("%d", &radius);

    int a[radius];

    for (int i=0; i<radius; i++){
        printf("a[%d]=" ,i);
        scanf("%d", &a[i]);
    }

    printf("Length of an Array:%d",radius);

    return 0;
}
