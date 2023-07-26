#include <stdio.h>
int main()
{
	double ans, fact=1, n, i;
	
	printf ("Enter a number: ");
	scanf ("%lf", &n);
	
	for (i=1; i<=n; i++)
	{
		fact = fact*i;
	}
	
	ans = 1/fact;
	
	printf ("1/n! is: %lf", ans);
	
	return 0;
}
