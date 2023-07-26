#include <stdio.h>

int main()
{
	int i, j;
	
	for (i=1; i<=5; ++i)
	{
		if (i%2 != 0)
		{
		        for (j=1; j<=i; ++j)
		        {
		              printf ("%d ", j);
		        }
		        
		        printf ("\n");
		}
		
		else
		{
		    for (j=i; j>=1; j--)
		    {
		        printf ("%d ", j);
		    }
		    
		    printf ("\n");
		}
		
	}
	
	return 0;
}
