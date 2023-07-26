#include <stdio.h>
int main()
{
	int a, b, c;
	
	printf ("Enter two numbers: ");
	scanf ("%d%d", &a, &b);
	
	c = a>b;
	printf ("\nOutput will be 1 if a is greater than b: %d", c);
	
	c = a<b;
	printf ("\nOutput will be 1 if b is greater than a: %d", c);
	
	c = a!=b;
	printf ("\nOutput will be 1 if a is not equal to b: %d", c);
	
	c == b;
	printf ("\nOutput will be 1 if a is equal to b: %d", c);
	
	return 0;
}
