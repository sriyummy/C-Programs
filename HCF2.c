#include <stdio.h>
int main()
{
	int a, b, i=1, hcf;
	
	printf ("Enter 2 numbers: ");
	scanf ("%d%d", &a, &b);
	
	do
	{
		if(a%i == 0)
		{
			if (b%i == 0)
			{
				hcf = i;
			}
		}
		
		++i;
	}
	while (i<a);
	
	printf ("The HCF is: %d", hcf);
}
