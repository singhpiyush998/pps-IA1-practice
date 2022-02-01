#include <stdio.h>

typedef struct complex
{
  float real, imaginary;
} Complex;

Complex input_complex()
{
  Complex comp;
  printf("Enter the real and imaginary part of complex number separated by a space or linebreak:\n");
  scanf("%f%f", &comp.real, &comp.imaginary);
  return comp;
}

Complex add(Complex a, Complex b)
{
  Complex sum;
  sum.real = a.real + b.real;
  sum.imaginary = a.imaginary + b.imaginary;
  return sum;
}

void output(Complex a, Complex b, Complex res)
{
  printf("%0.1f + %0.1fi + %0.1f + %0.1fi is %0.1f + %0.1fi\n", a.real, a.imaginary, b.real, b.imaginary, res.real, res.imaginary);
}

int main()
{
  Complex num1 = input_complex();
  Complex num2 = input_complex();
  Complex sum = add(num1, num2);
  output(num1, num2, sum);
  return 0;
}