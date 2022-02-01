#include <stdio.h>

void input(int *a, int *b)
{
  printf("Enter the first number:\n");
  scanf("%d", a);
  printf("Enter the second number:\n");
  scanf("%d", b);
}

void add(int a, int b, int *sum)
{
  *sum = a + b;
}

void output(int a, int b, int sum)
{
  printf("Sum of %d + %d is %d\n", a, b, sum);
}

int main()
{
  int num1, num2, sum;
  input(&num1, &num2);
  add(num1, num2, &sum);
  output(num1, num2, sum);
  return 0;
}