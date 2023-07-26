#include <stdio.h>

int main()
{
    int a[10], i, e=0, o=0;
    printf ("Enter 10 numbers to count number of even and odd numbers from: ");
    
    for (i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
        
        if (a[i]%2 == 0)
        {
            e = e + 1;
        }
        else
        {
            o = o + 1;
        }
    }
    
    printf ("\nThe number of even numbers are: %d \nThe number of odd numbers are: %d", e, o);
    
    return 0;
}
