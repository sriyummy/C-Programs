#include <stdio.h>

int main()
{
    int n, i, j, temp;
    
    printf ("Enter the length of the array where the reverse of the array is to be printed: ");
    scanf ("%d", &n);
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        printf ("\nEnter element number %d: ", i+1);
        scanf ("%d", &a[i]);
    }
    
    for (i=0; i<n; i++)
    {
    	for (j=i+1; j<n; j++)
    	{
    		if (a[j] < a[i])
    		{
    			temp = a[i];
    			a[i] = a[j];
    			a[j] = temp;
    		}
    	}
    }
    
    printf ("\nThe sorted array is: \n");
    for (i=0; i<n; i++)
    {
    	printf ("%d ", a[i]);
    }
    
    return 0;
}
