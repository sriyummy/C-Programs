#include <stdio.h>
#include <math.h>
int main()
{
	double n, i, sum=0;
	
	printf ("Enter the number till which you want to get the result of: \n 1+root2+root3+.....rootn");
	scanf ("%lf", &n);
	
	for (i=1; i<=n; ++i)
	{
		sum = sum + sqrt(i);
	}
	
	printf ("The sum of the series is: %lf", sum);
	
	return 0;
}
