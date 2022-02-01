#include <stdio.h>
#include <math.h>

float input()
{
    float n;
    printf("Enter the number\n");
    scanf("%f", &n);
    return n;
}

float my_sqrt(float n)
{
    float guess = 1;
    float prev = 1/2;

    while (fabs(guess - prev) > 0.000001)
    {
        prev = guess;
        guess = (guess + n / guess) / 2;
    }

    return guess;
}

void output(float num, float sqrt_result)
{
    printf("The square root of %f is %f\n", num, sqrt_result);
}

int main()
{
    float num = input();
    float res = my_sqrt(num);

    output(num, res);
    return 0;
}