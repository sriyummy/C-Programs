#include <stdio.h>

int hcfCalc (int x, int y);

int main()
{
    int a, b, gcd;
    
    printf ("Enter 2 numbers to find their GCD: ");
    scanf ("%d%d", &a, &b);
    
    gcd = hcfCalc (a, b);
    printf ("The HCF/GCD of the inputted values is: %d", gcd);
    
    return 0;
}

int hcfCalc (int x, int y)
{
    int i, hcf;
    
    for (i = 1; i<=x; i++)
	{
		if (x % i == 0)
		{
			if ( y % i == 0)
			{
				hcf = i;
			}
		}
	}
	
	return hcf;
}
