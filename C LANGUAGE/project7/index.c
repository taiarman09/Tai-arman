#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
        return a / b;
}


int main() {
    int choice, number1, number2, result;

    while (1) {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 0 for Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("exiting program.\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &number1);
        printf("Enter the second number: ");
        scanf("%d", &number2);

        switch (choice) {


            case 1:
                result = add(number1, number2);
                printf("your answer is : %d\n", result);
                break;


            case 2:
                result = sub(number1, number2);
                printf("your answer is : %d\n", result);
                break;


            case 3:
                result = multiply(number1, number2);
                printf("your answer is : %d\n", result);
                break;


            case 4:
                result = divide(number1, number2);
                    printf("your answer is : %d\n", result);
                break;
            
            default:
                printf("invalid choice. please try again.\n");
        }
    }

    return 0;
}