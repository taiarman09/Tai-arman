#include <stdio.h>

int main(){

    int radius;
    printf("Enter Array Size: ");
    scanf("%d", &radius);

    int a[radius],b[radius],c[radius];

    for (int i=0; i<radius; i++){
        printf("a[%d]=" ,i);
        scanf("%d", &a[i]);
    }
    for (int i=0; i<radius; i++){
        printf("b[%d]=" ,i);
        scanf("%d", &b[i]);
    }
    for (int i=0; i<radius; i++){
        c[i]=a[i]+b[i];
    }

    printf("Array C is:");

    for (int i=0; i<radius; i++)
    {
        printf("%d,",c[i]);

    }
        printf("\n");

    return 0;
}