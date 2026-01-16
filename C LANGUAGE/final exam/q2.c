#include <stdio.h>

int main() {
    int  i, n, larg;
    int array[100];


    printf("enter any number : ");
    scanf("%d", &n);


    printf("your value is :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }


    larg = array[0];
   


    for (i = 1; i < n; i++) {
        if (array[i]>larg) {
            larg = array[i];
        }
    }


    printf("The largest element is: %d\n", larg);










    return 0;
}
