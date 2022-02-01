#include <stdio.h>

typedef struct complex
{
  float real, imaginary;
} Complex;

int get_n()
{
  int n;
  printf("Enter the length of the array:\n");
  scanf("%d", &n);
  return n;
}

Complex input_complex()
{
  Complex comp;
  printf("Enter the real and imaginary part of complex number separated by a space or linebreak:\n");
  scanf("%f%f", &comp.real, &comp.imaginary);
  return comp;
}

void input_n_complex(int n, Complex c[n])
{
  for (int i = 0; i < n; i++)
  {
    c[i] = input_complex();
  }
}

Complex add(Complex a, Complex b)
{
  Complex sum;
  sum.real = a.real + b.real;
  sum.imaginary = a.imaginary + b.imaginary;
  return sum;
}

Complex add_n_complex(int n, Complex c[n])
{
  Complex sum;
  sum.real = 0;
  sum.imaginary = 0;
  for (int i = 0; i < n; i++)
  {
    sum = add(sum, c[i]);
  }
  return sum;
}

void output(int n, Complex c[n], Complex result)
{
  for (int i = 0; i < n - 1; i++)
  {
    printf("%0.1f + %0.1fi\n", c[i].real, c[i].imaginary);
  }
  printf("%0.1f + %0.1fi is\n%0.1f + %0.1fi\n", c[n-1].real, c[n-1].imaginary, result.real, result.imaginary);
}

int main()
{
  int length = get_n();
  Complex data[length];
  input_n_complex(length, data);
  Complex sum = add_n_complex(length, data);
  output(length, data, sum);
  return 0;
}