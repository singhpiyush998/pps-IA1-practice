#include <stdio.h>

int input_array_size()
{
  int length;
  printf("Enter the length of the array:\n");
  scanf("%d", &length);
  return length;
}

void input_array(int n, int a[n])
{
  printf("Enter the values of array:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
}

int sum_n_arrays(int n, int a[n])
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
  }
  return sum;
}

void output(int n, int a[n], int sum)
{
  for (int i = 0; i < n - 1; i++)
  {
    printf("%d+", a[i]);
  }
  printf("%d is %d\n", a[n-1], sum);
}

int main()
{
  int length = input_array_size();
  int data[length];
  input_array(length, data);
  int sum = sum_n_arrays(length, data);
  output(length, data, sum);
  return 0;
}