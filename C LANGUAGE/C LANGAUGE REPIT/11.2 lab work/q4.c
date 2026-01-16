// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n=5;
    
    for(int i=n; i>=1; i--){
        
        for(int  k=1; k<=i; k++){
            if(k%2 ==0){
                printf("0");
            }else{
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}