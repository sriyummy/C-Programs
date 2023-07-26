#include <stdio.h>
int main()
{
	int i, j, c;
	
	for (i=1; i<=50; ++i)
	{
		for (j=1; j<(i+1)/2; ++j)
		{
			if(i%j == 0)
			{
				c=c+1;
			}
			
		}
		
		if (c<=1)
		{
			printf ("\n %d", i);
		}
		
		c=0;
	}
	
	return 0;
}
