#include <stdio.h>

int main()
{
    int n, i;
    
    printf ("Enter the length of the array where the reverse of the array is to be printed: ");
    scanf ("%d", &n);
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        printf ("\nEnter element number %d ", i+1);
        scanf ("%d", &a[i]);
    }
    
    printf ("\nPrinting your inputs in reverse: ");
    for (i=(n-1); i>=0; i--)
    {
        printf ("\n%d", a[i]);
    }
    
    return 0;
}
