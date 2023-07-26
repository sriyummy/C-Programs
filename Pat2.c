#include <stdio.h>
#include <math.h>
int main()
{
	
	double x, n, i, num, den, ans, fact=1;
	
	printf ("Enter the values of X and n where the answer is (X^n/n!");
	scanf ("%lf%lf", &x, &n);
	
	num = pow(x,n);
	
	for (i=1; i<=n; ++i)
	{
		fact = fact * i;
	}
	
	den = 1/fact;
	
	ans = num*den;
	
	printf ("The asnwer for your input is: %lf", ans);
	
	return 0;
}
