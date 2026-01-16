#include <stdio.h>


int cube(int *cube)
{
    return (*cube) * (*cube) * (*cube);
}



int main()
{
    int n;


    printf("Enter Array's size: ");
    scanf("%d", &n);

    int arr[n][n];


    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }


    printf("Cubes of all elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int *ptr = &arr[i][j];
            printf("%d\t", cube(ptr));
        }
        printf("\n");
    }

    return 0; 
}
