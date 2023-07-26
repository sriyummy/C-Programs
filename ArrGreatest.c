#include <stdio.h>

int main()
{
    int n, i, gn=0;
    
    printf ("Enter the length of the array where the largest number is to be found: ");
    scanf ("%d", &n);
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        printf ("\nEnter element number %d ", i+1);
        scanf ("%d", &a[i]);
        
        if (a[i]>gn)
        {
            gn = a[i];
        }
    }
    
    printf ("\nThe greatest number in the array is: %d", gn);
    
    return 0;
}
