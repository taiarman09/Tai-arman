#include <stdio.h>

 int  main()
 {
    int num1 =12;
    int num2 =6;
    int num3 =5;
    int result1 = num1 + num2;
    int result2 = num1-num2;
    int result3 = num1*num2;
    int result4 = num1/num2;
    int result5 = num3*num3;
    printf("Addistion of 12 and 6 is 18\n");
    printf("Subtraction of 12 and 6 is 6\n");
    printf("Multiplication  of 12 and 6 is 72\n");
    printf("Division of 12 and 6 is 2\n");
    printf("\n");
    printf(" %d + %d = %d\n",num1 ,num2,result1);
    printf(" %d - %d = %d\n",num1,num2,result2);
    printf(" %d * %d = %d\n",num1,num2,result3);
    printf(" %d / %d = %d\n",num1,num2,result4);


    printf("--------------\n");
    printf("|            |\n");
    int multiple = num3*num3;
    printf("| %d X %d = %d |\n",num3,num3,result5),
    printf("|            |\n");
    printf("--------------");

    return 0;

 }