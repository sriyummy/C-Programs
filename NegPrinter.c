#include <stdio.h>

int main()
{
	int n;
	
	level1:
	{
		printf ("Enter the req no: ");
		scanf ("%d", &n);
		
		if (n<0)
		{
			goto level1;
		}
		else
		{
			printf (" Meow Meow");
		}
	}
	
	return 0;
}
