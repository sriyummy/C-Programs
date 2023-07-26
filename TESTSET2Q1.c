#include <stdio.h>

void arRep (int array[], int size);

int main()
{
	int arr[100];
	int n, i;
	
	printf ("Enter the number of elements you want in your array:");
	scanf ("%d", &n);
	
	for (i=0; i<n; i++)
	{
		printf ("Enter element number: %d", i+1);
		scanf ("%d", &arr[i]);
	}
	
	arRep(arr, n);
	
	return 0;
}

void arRep (int array[], int size)
{
	int in, i;
	
	printf ("Enter the index number you want to delete the element from: ");
	scanf ("%d", &in);
	
	for (i=in; i<size; i++)
	{
		array[i] = array[i+1];
	}
	
	printf ("The modified array is: ");
	for (i=0; i<size-1; i++)
	{
		printf ("%d ", array[i]);
	}
} 
