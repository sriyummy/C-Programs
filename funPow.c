#include <stdio.h>

double powCalc (double a, int b);

int main()
{
    int k;
    double x, res;
   
    printf ("Enter the values of x and k respectively, where result is x^k: (x is a double value and k is an integer value)");
    scanf ("%lf", &x);
    scanf ("%d", &k);
    
    res = powCalc (x, k);
    printf ("The result is: %lf", res);
    
    return 0;
}

double powCalc (double a, int b)
{
    return (double)pow (a, b);
}
