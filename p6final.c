#include <stdio.h>

void input_two_string(char *a, char *b)
{
  printf("Enter the first string:\n");
  scanf("%s", a);
  printf("Enter the second string:\n");
  scanf("%s", b);
}

/*
0 - Same input
larger than 0 - 1st input is greater
smaller than 0 - 2nd input is greater
*/

int strcmp(char *a, char *b)
{
  int i;
  for (i = 0; a[i] && a[i] == b[i]; i++);
  return a[i] - b[i];
}

void output(char *a, char *b, int result)
{
  if (result > 0)
    printf("%s is greater than %s\n", a, b);
  else if (result < 0)
    printf("%s is greater than %s\n", b, a);
  else
    printf("Both inputs are equal\n");
}

int main()
{
  char str1[20], str2[20];
  input_two_string(str1, str2);
  int result = strcmp(str1, str2);
  output(str1, str2, result);
  return 0;
}