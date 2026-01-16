#include <stdio.h>
#include <ctype.h>
int main() {

    char str[]="hello world";
    for (int i=0; str[i]; i++)
    
        str[i]=toupper(str[i]);
        printf("%s", str);
    
    


    return 0;
}