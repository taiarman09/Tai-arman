#include <stdio.h>

int main()
{

    int row, col;
    float sum=0,average=0;

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter array's elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j=0; j<col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
            sum+=arr[i][j];
        }
    }

    average=sum/(row*col);

    printf("Average of an Array: %.2f", average);

    return 0;
}