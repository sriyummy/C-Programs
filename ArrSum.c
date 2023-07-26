#include <stdio.h>

int main()
{
    int n, sum=0, i;
    
    printf ("Enter the value of n where n is the number of elements in the array: ");
    scanf ("%d", &n);
    
    int a[n];
    
    printf ("Enter %d values: ", n);
    for (i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
        sum = sum+a[i];
    }
    
    printf ("The sum of the inputs in your array is: %d", sum);
    
    return 0;
}
