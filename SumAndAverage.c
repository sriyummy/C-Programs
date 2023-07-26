#include <stdio.h>
int main()
{
	int a, avg;
	int k = 0, sum = 0;
	
	scanf ("%d", &a);
	
	while (k <10)
	{
		printf ("Enter a random number: ");
		scanf ("%d", &a);
		
		sum = sum + a;
		
		++k;
	}
	
	avg = sum/10;
	
	printf ("\nSum and average are: %d and %d", sum, avg);
	
	return 0;
}
