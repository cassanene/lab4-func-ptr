#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int exiting(int a, int b);

int main(void)
{
  int a = 6;
  int b = 3;
  int operation;
  int answer = 0;

  /* IMPLEMENT ME: Insert your algorithm here */
  printf("Operand 'a' : %d | ", a);
  printf("Operand 'b' : %d \n", b);
  printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
  scanf(" %d", &operation);

  answer = (operation == 0) ? add(a, b) : (operation == 1 ? subtract(a, b) : (operation == 2 ? multiply(a, b) : (operation == 3 ? divide(a, b) : (operation == 4 ? exiting(a, b) : 0))));

  printf("x = %d\n", answer);

  return answer;
}

/* IMPLEMENT ME: Define your functions here */
int add(int a, int b)
{
  printf("Adding 'a' and 'b'\n");
  return a + b;
}

int subtract(int a, int b)
{
  printf("Subtracting 'b' from 'a'\n");
  return a - b;
}

int multiply(int a, int b)
{
  printf("Multiplying 'a' and 'b'\n");
  return a * b;
}

int divide(int a, int b)
{
  printf("Dividing 'a' by 'b'\n");
  return a / b;
}

int exiting(int a, int b)
{
  exit(0);
  return 0;
}
