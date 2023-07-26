#include <stdio.h>

int main()
{
	int a[10], i;
	
	for (i=0; i<10; i++)
	{
		printf ("Enter element number %d: ", i+1);
		scanf ("%d", &a[i]);
	}
	
	printf ("The elements entered are: ");
	
	for (i=0; i<10; i++)
	{
		printf ("\n%d", a[i]);
	}
	
	return 0;
}
