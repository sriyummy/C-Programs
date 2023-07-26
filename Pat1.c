#include <stdio.h>
int main()
{	
	double num, l=0, fact=1, j, i;
	
	printf ("Enter the number of terms of the pattern: \n l=1/0!+1/1!+1/2!.....n that you want to print: ");
	scanf ("%lf", &num);
	
	for (i=0; i<num; i++)
	{
		for (j=0; j<=i; j++)
		{
			if (j!=0)
			{
				fact = fact*j;
			}
			else
			{
				fact = 1;
			}
			
		}
		
		l = l+(1/fact);
		
		fact = 1;
	}
	
	printf ("The sum of the series is: %lf", l);
	
	return 0;
}
