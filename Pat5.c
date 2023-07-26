#include <stdio.h>
int main()
{
	double n, sum=1, i, fact=1, num;
	
	printf ("Enter the value of n in the pattern: \n 1+1/1!+2/2!....n/n!");
	scanf ("%lf", &n);
	
	for (i=1; i<=n; ++i)
	{
		num = i;
		fact = fact * i;
		
		sum = sum + (num/fact);
	}
	
	printf ("The ans for your series is: %lf", sum);
	
	return 0;
}
