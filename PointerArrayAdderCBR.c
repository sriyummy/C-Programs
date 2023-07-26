#include <stdio.h>
#include <stdlib.h>

int sumArr (int* array, int size, int* result);

int main()
{
    int n;
    printf ("Enter the number of elements you want to have inn your array: ");
    scanf ("%d", &n);

    int* arr = (int*)malloc(n*sizeof(int));

    for (int i=0; i<n; i++)
    {
        printf ("Enter element number: %d ", i+1);
        scanf ("%d", &arr[i]);
    }

    int sum = 0;
    sumArr (arr, n, &sum);

    printf ("The sum of all the elemnts in the given array is: %d", sum);

    return 0;
}

int sumArr (int* array, int size, int* result)
{
    *result = 0;
    for (int i=0; i<size; i++)
    {
        *result += array[i];
    }
}