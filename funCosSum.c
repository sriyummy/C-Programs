#include <stdio.h>
#include <math.h>

void sumSeries(double x, int n);

int main()
{
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    sumSeries(x, n);

    return 0;
}

void sumSeries(double x, int n) 
{
    double term, sum = 1;
    int i, sign = -1, fact = 2;

    for (i = 2; i <= n; i += 2) 
    {
        term = pow(x, i) / fact;
        sum += sign * term;
        sign *= -1;
        fact *= (i + 1) * (i + 2);
    }

    printf("The sum of the series is: %lf", sum);
}

