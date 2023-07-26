#include <stdio.h>
int main()
{
	int a, b, c;
	
	printf ("Enter 3 numbers: ");
	scanf ("%d%d%d", &a, &b, &c);
	
	if (a>b)
	{
		if (a>c)
		{
			printf ("\na is the largest number");
		}
		else
		{
			printf ("\nc is the largest number");
		}
	}
	else
	{
		if (b>c)
		{
			printf ("\nb is the largest number");
		}
		else
		{
			printf ("\nc is the largest number");
		}
	}
	
	return 0;
}
