#include <stdio.h>
int main()
{
	int a, r, sum=0;
	
	printf ("Enter a number: ");
	scanf ("%d", &a);
	
	 do
	{
		r = a % 10;
		sum = sum + r;
		a=a/10;
	}
	while (a>0);
	
	printf ("Sum = %d", sum);
	
	return 0;
}

