#include <stdio.h>

int main()
{
    int n, i, temp;
    
    printf ("Enter the number of elements you want to swap places of :");
    scanf ("%d", &n);
    
    int a[n];
    for (i=0; i<n; i++)
    {
        printf ("Enter element number %d: ", i+1);
        scanf ("%d", &a[i]);
    }
    
    for (i=0; i<n; i+=2)
    {
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
    
    printf ("Swapped Array is: \n");
    for (i=0; i<n; i++)
    {
        printf ("%d ",a[i]);
    }
    
    return 0;
}
