#include <stdio.h>
int main()
{
	int num1, num2, i, hcf;
	
	printf ("Enter 2 numbers: ");
	scanf ("%d%d", &num1, &num2);
	
	for (i = 1; i<=num1; i++)
	{
		if (num1 % i == 0)
		{
			if ( num2 % i == 0)
			{
				hcf = i;
			}
		}
	}
	
	printf ("The Highest Common Factor is: %d", hcf);
	
	return 0;
}
	
	
