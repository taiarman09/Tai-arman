#include <stdio.h>

int main(){

    int row,column,i,j;


    printf("Enter the array's row size :");
    scanf("%d", &row);

    printf("Enter the array's column size :");
    scanf("%d", &column);


    int a[row][column];

    printf("Enter array's elements: \n");
    for (int i=0; i<row; i++)
    {
      for (int j=0; j<column; j++)
      {
        printf("a[%d][%d] = ", i,j);
        scanf("%d", &a[i][j]);
      }
      
    }

    int result=a[0][0];

    for (int i=0; i<row; i++)
    {
       for (int j=0; j<column; j++)
       {
            if (a[i][j]>result)
            {
                result=a[i][j];
            }
            
       }
       
    }


        printf("The Largest elements is : %d",result);
    
    

    
    return 0;
}