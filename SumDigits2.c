#include <stdio.h>
int main()
{
	int a, r, sum=0;
	
	printf ("Enter a number: ");
	scanf ("%d", &a);
	
	for ( ; a>0 ; a=a/10)
	{
		r = a % 10;
		sum = sum + r;
	}
	
	printf ("Sum = %d", sum);
	
	return 0;
}
