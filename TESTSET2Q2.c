#include <stdio.h>

void arrPrime(int array[], int size);

int main()
{
	int n, i;
	
	printf ("Enter the number of elements you want to have in your array: ");
	scanf ("%d", &n);
	
	int arr[n];
	
	for (i=0; i<n; i++)
	{
		printf ("Enter element number %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	arrPrime(arr, n);
	
	return 0;
}

void arrPrime(int array[], int size)
{
	int i, j, c=0, p=0;
	
	for (i=0; i<size; i++)
	{
		for (j=2; j<(array[i]+1)/2; j++)
		{
			if (array[i]%j == 0)
			{
				c++;
			}
		}
		if (c>0)
		{
			p++;
		}
		
		c=0;
	}
	
	printf ("No of prime nos: %d", p);
}
