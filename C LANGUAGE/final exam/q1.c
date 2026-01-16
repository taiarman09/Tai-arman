#include <stdio.h>


int main(){

    int i,n;
    char charactor;


    printf("Enter Any Charactor :");
    scanf("%c", & charactor);

    switch (charactor)
    {
        case 'a':
        printf("%c : is vowel value",charactor);
        break;
        case 'e':
        printf("%c : is vowel value",charactor);
        break;
        case 'i':
        printf("%c : is vowel value",charactor);
        break;
        case 'o':
        printf("%c : is vowel value",charactor);
        break;
        case 'u':
        printf("%c : is vowel value",charactor);
        break;
        case 'A':
        printf("%c : is vowel value",charactor);
        break;
        case 'E':
        printf("%c : is vowel value",charactor);
        break;
        case 'I':
        printf("%c : is vowel value",charactor);
        break;
        case 'O':
        printf("%c : is vowel value",charactor);
        break;
        case 'U':
        printf("%c : is vowel value",charactor);
        break;
    
    default:
        if ((charactor>='a' && charactor<='z') || (charactor>='A' && charactor<='Z'))
        {
            printf("%c: is a consonant value",charactor);
        }
    }


    return 0;
}