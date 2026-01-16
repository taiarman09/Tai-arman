
#include <stdio.h>

int main(){
    int i,j;
    float number=0.0;

    printf("Enter the array's row size:");
    scanf("%d",&i);

    printf("Enter the array's column size:");
    scanf("%d",&j);

    int a[i][j];

    printf("enyter arrays elements:\n");
    for (int k=0; k<i; k++)
    {
        for (int l=0; l<j; l++)
        {
            printf("a[%d][%d] =",k,l);
            scanf("%d",&a[k][l]);
            number+=a[k][l];
        }
        
    }

    float value=number/(i*j);
    printf("Average of an Arrays: %f",value);
    

    return 0;
}
