#include <stdio.h>
int main()
{
	int x,i,n;
	
	printf ("Enter the values of x and n where ans is x^n: ");
	scanf ("%d%d", &x, &n);
	
	for (i=2; i<n; ++i)
	{
		x = x*x;
	}
	
	printf ("Your answer is: %d", x);
	
	return 0;
}
