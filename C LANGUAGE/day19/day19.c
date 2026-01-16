#include <stdio.h>

void sumarray(int n, int a[]){



    int sum=0;

    for (int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    
    printf("The sum of an  array's : %d",sum);


}


int main(){

    int n;

    printf("enter array's size :");
    scanf("%d",&n);
    

    int a[n];

    printf("enter array's elements:\n");
    for (int i=0; i<n; i++)
    {
        printf("a[%d] =",i);
        scanf("%d", &a[i]);
    }

    sumarray(n,a);
    
    

    return 0;
}