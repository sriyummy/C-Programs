#include <stdio.h>
#include <math.h>
int main()
{
	double num, den=1, i, j, n, x;
	
	printf ("Enter the term upto which the pattern: \nX+(X^2)/2!+(X^3)/3!..... is needed to be printed");
	scanf ("%lf", &n);
	
	printf ("Enter the value of X: ");
	scanf ("%lf", &x);
	
	double sum = x;
	
	for (i=2; i<=n; i+=2)
	{
		num = pow (x,i);
		
		for (j=1; j<=i; j++)
		{
			den = den*j;
		}
		
		sum = sum + (num/den);
	}
	
	printf ("The pattern gives answer: %lf", sum);
	
	return 0;
}
		
		
