#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	
	for (i=1; i<=10; i++)
	{
		if (i%3 == 0)
		exit(0);
		
		printf ("%d", i);
	}
	
	printf ("Hello World");
}

