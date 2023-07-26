#include <stdio.h>
int main()
{
	int a;
	
	printf ("Enter a number: ");
	scanf ("%d", &a);
	
	if (a>0)
	{
		printf ("Your input is positive");
	}
	else if (a<0)
	{
		printf ("Your input is negative");
	}
	else
	{
		printf ("Your input is 0");
	}
	
	return 0;
}
	
