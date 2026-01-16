#include  <stdio.h>

int main(){

    int i,j,n=5;
    char ch ='A';
    for (int i=1; i<=n; i++)
    {
       for (int j=0; j<i; j++)
       {
            printf("%c ", ch-(j-1));
       }
       printf("\n");
       ch++;
    }
    return 0;
}




// #include <stdio.h>

// int main() {
//     int i, j, n = 5;
//     char ch;
//     for (i = 1; i <= n; i++) {
//         ch = 'A' + i - 1; // starting letter of row
//         for (j = 0; j < i; j++) {
//             printf("%c", ch - j);
//         }
//         printf("\n");
//     }

//     return 0;
// }
