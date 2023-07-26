#include <stdio.h>

int main()
{
	int n, i;
	
	printf ("Enter the number of array elements you'd like to find the greatest and smallest number out of: ");
	scanf ("%d", &n);
	
	int a [n];
	
	for (i=0; i<n; i++)
	{
		printf ("Enter element number %d:  ", i+1);
		scanf("%d", &a[i]);
	}
	
	int gr, sm;
	gr = sm = a[0];
	
	for (i=0; i<n; i++)
	{
		if (a[i] > gr)
		{
			gr = a[i];
		}
		
		if (a[i] < sm)
		{
			sm = a[i];
		}
	}
	
	printf ("The greatest number is %d and the smallest number is %d, in the array", gr, sm);
	
	return 0;
}
