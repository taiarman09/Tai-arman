#include <stdio.h>

int main()
{

    int i, size, row, column;
    float sum=0,result;

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &column);

    int arr[row][column];

    printf("Enter array's elements: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j=0; j<column; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &arr[i][j]);
            sum+=arr[i][j];
        }
        result= sum/(row*column);
    }
    printf("Average of an Array: %f",result);
    

    return 0;
}