#include <stdio.h>

int larNum (int array[], int size);

int main()
{
    int n, i;

    printf ("Enter the number of elements you want to have in the array: ");
    scanf ("%d", &n);

    int arr[n];

    for (i=0; i<n; i++)
    {
        printf ("Enter element number %d: ", i+1);
        scanf ("%d", &arr[i]);
    }

    printf ("The largest element in the array is: %d", larNum (arr, n));

    return 0;
}

int larNum (int array[], int size)
{
    int j, lar;

    for (j=0; j<size-1; j++)
    {
        if (array[j] < array[j+1])
        {
            lar = array[j+1];
        }
    }

    return lar;
}