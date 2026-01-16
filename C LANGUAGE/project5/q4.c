

#include <stdio.h>

int main() {
    int b, col, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &b);
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int a[b][col];

    printf("\nEnter array's elements:\n");
    for (i = 0; i < b; i++) {
        for (j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int r, run = 0;
    printf("\nEnter row number: ");
    scanf("%d", &r);

    printf("Elements of row %d: ", r);
    for (j = 0; j < col; j++) {
        printf("%d, ", a[r][j]);
        run += a[r][j];
    }
    printf("\nThe sum of a row %d: %d\n", r, run);

    int c, fast = 0;
    printf("\nEnter column number: ");
    scanf("%d", &c);

    printf("Elements of column %d: ", c);
    for (i = 0; i < b; i++) {
        printf("%d, ", a[i][c]);
        fast += a[i][c];
    }
    printf("\nThe sum of a column %d: %d\n", c, fast);

    return 0;
}