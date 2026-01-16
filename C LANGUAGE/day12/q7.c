#include <stdio.h>

int main(){

    char n='E';

    for(int i='A'; i<=n; i++){

        for (int j=i; j>='A'; j--)
        {
            printf("%c ",j);
        }
        printf("\n");
        
    }



    return 0;
}