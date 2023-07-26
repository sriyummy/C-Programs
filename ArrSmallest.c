#include <stdio.h>

int main()
{
    int n, i, sn=1000000000;
    
    printf ("Enter the length of the array where the largest number is to be found: ");
    scanf ("%d", &n);
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        printf ("\nEnter element number %d ", i+1);
        scanf ("%d", &a[i]);
        
        if (a[i]<sn)
        {
            sn = a[i];
        }
    }
    
    printf ("\nThe smallest number in the array is: %d", sn);
    
    return 0;
}
