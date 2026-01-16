#include <stdio.h>

int main(){

    int n,i,j;


    printf("Enter the array's row size :");
    scanf("%d", &n);



    int a[n][n],matrix[n][n];

    printf("Enter array's elements: \n");
    for (int i=0; i<n; i++)
    {
      for (int j=0; j<n; j++)
      {
        printf("a[%d][%d] = ", i,j);
        scanf("%d", &a[i][j]);
      }
      
    }

    int result=a[0][0];

    for (int i=0; i<n; i++)
    {
       for (int j=0; j<n; j++)
       {
           matrix[j][i]=a[i][j];
            
       }
       
    }


        printf("The transpose matrix of an array:");
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
               printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
        


    
    return 0;
}