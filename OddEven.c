#include <stdio.h>
int main()
{
	int a;
	
	printf ("Enter a number: ");
	scanf ("%d", &a);
	
	if (a%2 == 0)
	{
		printf ("Your input is even");
	}
	else
	{
		printf ("Your input is odd");
	}
	
	return 0;
}
