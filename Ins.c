#include <stdio.h>

int main()
{
	int arr[100] = { 0 };
	int i, x, pos, n;
	
	printf ("Enter original length: ");
	scanf ("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf ("Enter element number %d ", i+1);
		scanf ("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf ("Enter value to be inserted and position where it is to be inserted: ");
	scanf ("%d%d", &x, &pos);

	n++;

	for (i = n - 1; i >= pos; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[pos - 1] = x;

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

