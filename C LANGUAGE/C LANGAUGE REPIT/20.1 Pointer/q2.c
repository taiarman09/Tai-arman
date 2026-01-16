#include <stdio.h>

int main()
{

    int x, y, z;
    int *p1, *p2;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    p1 = &x;
    p2 = &y;

    printf("\nBefore swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    z = *p1;
    *p1 = *p2;
    *p2 = z;

    printf("\nAfter swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}