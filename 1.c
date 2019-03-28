#include "header.h"
#include<assert.h>

int main()
{
    float num1=-4, num2=-5, pow;
    char op;
    printf("Enter [num 1] operator and [num 2]:\n");
    scanf("%f %c %f",&num1,&op,&num2);

    calculator(op,num1,num2);

    test_add();
    test_sub();
    test_mul();
    test_div();
}








