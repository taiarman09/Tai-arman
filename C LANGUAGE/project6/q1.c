#include <stdio.h>

int main() {
    char str[100];

    printf("Enter any string: ");
    scanf("%s", str);

    if(str == 0) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is NOT a Palindrome.\n");
    }

    return 0;
}
