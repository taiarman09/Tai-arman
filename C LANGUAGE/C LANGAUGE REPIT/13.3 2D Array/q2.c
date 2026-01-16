#include <stdio.h>

int main()
{

    int i, size, row, column;
    float sum = 0, result;

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &column);

    int a[row][column], b[row][column], c[row][column];

    printf("Enter array A's elements: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter array B's elements: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("array c is: \n");
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<column; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}