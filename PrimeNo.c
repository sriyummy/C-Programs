#include <stdio.h>
int main()
{
	int num, c=0, i;
	
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	for (i = 1; i<=(num+1)/2; i++)
	{
		if (num%i == 0)
		{
			c = c+1;
		}
	}
	
	if (c>1)
	{
		printf ("Composite Number!");
	}
	else
	{
		printf ("Prime Number!");
	}
	
	return 0;
}
