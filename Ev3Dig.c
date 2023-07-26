#include <stdio.h>

int main()
{
    int a[100], i;
    
    for (i=0; i<100; i++)
    {
        printf ("Enter value of element number %d: ", i+1);
        scanf ("%d", &a[i]);
        
        if ((a[i]/100 < 10) && (a[i]%2 == 0))
        {
            printf ("%d", a[i]);
        }
    }
    
    return 0;
}
