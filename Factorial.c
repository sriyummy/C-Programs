#include <stdio.h>
int main()
{
	int num, i, fact = 1;
	
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	for (i=1 ; i<=num ; i++)
	{
		if (num != 0)
		{
			fact = fact*i;
		}
		
		else
		{
			printf ("Factorial of 0 is 1");
		}
	}
	
	printf ("The factorial of your input is: %d", fact);
	
	return 0;
}
	
