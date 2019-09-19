#include <stdio.h>

int add(int a, int b)
{
  return a + b;
}

int sub(int a, int b)
{
  return a - b;
}

int mul(int a, int b)
{
  return a*b;
}

int div(int a, int b)
{
  return a/b;
}

int mod(int a, int b)
{
  return a%b;
}

int main ()
{
    int opsel, a, b;
    printf("\nCalculator App: Choose your operation: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your operation: ");
    scanf("%d", &opsel);
    printf("Enter two values separated by space: ");
    scanf("%d%d", &a, &b);
    switch(opsel)
    {
      case 1:
        printf("The sum is %d\n", add(a,b));
        break;
      case 2:
        printf("The difference is %d\n", sub(a,b));
        break;
      case 3:
        printf("The product is %d\n", mul(a,b));
        break;
      case 4:
        printf("The quotient is %d\n", div(a,b));
        break;
      case 5:
        printf("The answer is %d\n", mod(a,b));
        break;
      default:
        printf("Operation is not in the choices: ");
        break;
    }
    return 0;
}
