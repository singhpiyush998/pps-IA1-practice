#include <stdio.h>

int input()
{
  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  return num;
}

int cmp(int a, int b, int c)
{
  int large = a;
  if (large < b)
    large = b;
  if (large < c)
    large = c;
  return large;  
}

void output(int a, int b, int c, int largest)
{
  printf("The largest of %d, %d and %d is %d\n", a, b, c, largest);
}

int main()
{
  int num1 = input();
  int num2 = input();
  int num3 = input();

  int largest = cmp(num1, num2, num3);
  output(num1, num2, num3, largest);
  return 0;
}