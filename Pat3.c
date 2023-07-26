#include <stdio.h>
int main()
{
	int n;
	double i, sum =0;
	
	printf ("Enter the place you want to print the series of 1 + 1/2 + 1/3..... upto");
	scanf ("%d", &n);
	
	for (i=1; i<=n; ++i)
	{
		sum = sum + (1/i);
	}
	
	printf ("The result for your series is: %lf", sum);
	
	return 0;
}

