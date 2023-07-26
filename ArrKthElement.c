#include <stdio.h>

int main()
{
    int n, i, k, j, c=0;

    printf ("Enter the number of elements you want to have in your array: ");
    scanf ("%d", &n);

    int arr[n];

    for (i=0; i<n; i++)
    {
        printf ("Enter element number %d ", i+1);
        scanf ("%d", &arr[i]);
    }

    printf ("Enter the kth smallest number you want to print from within the array: ");
    scanf ("%d", &k);

    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (arr[i]<arr[j])
            {
                ++c;
            }
        }

        if (c == (k-1))
        {
            printf ("%d is the %dth smallest element in the array!", arr[i], k);
        }

        c = 0;
    }

    return 0;
}