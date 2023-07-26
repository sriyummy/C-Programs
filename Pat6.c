#include <stdio.h>
#include <math.h>
int main()
{
	double n, i, sum=0;
	
	printf ("Enter the number till which the series: \n1^1+2^2+3^3....n is to be printed. ");
	scanf ("%lf", &n);
	
	for (i=1; i<=n; ++i)
	{
		sum = sum + pow(i, i);
	}
	
	printf ("The answer to the series is: %lf", sum);
	
	return 0;
}
		
