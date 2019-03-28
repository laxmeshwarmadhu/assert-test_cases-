#include<assert.h>

float calculator(char op,float num1,float num2)
{
  float result=1,a;

    switch(op)
    {
        case '+':
            result=num1+num2;
            break;

        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;

        case '/':
            result=num1/num2;
            break;

        case '^':
            a=num2;
            while (a!= 0)
              {
                 result *=num1;
                 a--;
              }
              break;

        default:
             printf("Invalid\n");
             break;
    }

   printf("%.2f %c %.2f = %.2f\n",num1,op,num2,result);

    return result;
}


void test_add(void)
{
  printf (" Task add using assert: \n");
  assert(calculator('+',-4,-5)==-9);
  printf (" OK add is perfect\n");

}

void test_sub(void)
{
  printf (" Task add using assert: \n");
  assert(calculator('-',-4,-5)==1);
  printf (" OK subtraction is perfect \n");

}

void test_mul(void)
{
  printf (" Task add using assert: \n");
  assert(calculator('*',-4,5)==-20);
  printf (" OK multiplication is perfect\n");

}

void test_div(void)
{
  printf (" Task add using assert: \n");
  assert(calculator('/',-4,-5)==(float)0.8);
  printf (" OK division is perfect\n");

}





