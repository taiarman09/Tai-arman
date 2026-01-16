// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main() {
//     char password[100];
//     int hasLetter = 0, hasDigit = 0, hasSpecial = 0;
    
//     printf("Create your password: ");
//     scanf("%s", password);
    
//     int length = strlen(password);
    
//     if (length >= 6) {
//         for (int i = 0; i < length; i++) {
//             if (isalpha(password[i]))
//                 hasLetter = 1;
//             else if (isdigit(password[i]))
//                 hasDigit = 1;
//             else
//                 hasSpecial = 1;
//         }
//     }
    
//     if (length >= 6 && hasLetter && hasDigit && hasSpecial)
//         printf("Your password is Strong.\n");
//     else
//         printf("Your password is not Strong.\n");
    
//     return 0;
// }
