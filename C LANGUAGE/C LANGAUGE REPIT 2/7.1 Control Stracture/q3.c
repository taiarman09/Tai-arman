#include <stdio.h>

int main()
{

    float maths, english, science, result;

    printf("Enter maths marks: ");
    scanf("%f", &maths);
    printf("Enter english marks: ");
    scanf("%f", &english);
    printf("Enter science marks: ");
    scanf("%f", &science);

    result = (maths + english + science) / 3;

    printf("Average mark: %f", result);

    return 0;
}