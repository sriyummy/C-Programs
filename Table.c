#include <stdio.h>
int main()
{
	int m,i;
	
	printf ("Enter a number whose multiplication table needs to be printed: ");
	scanf ("%d", &m);
	
	printf ("The multiplication table is: ");
	
	for (i=1; i<=10; ++i)
	{
		printf ("\n %d", m*i);
	}
	
	return 0;
}
