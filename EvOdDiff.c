#include <stdio.h>

int main()
{
    int a[10], i, e=0, o=0, diff;
    printf ("Enter 10 numbers to find the difference between the sum of odd and even numbers from: ");
    
    for (i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
        
        if (a[i]%2 == 0)
        {
            e = e + a[i];
        }
        else
        {
            o = o + a[i];
        }
    }
       
        diff = e-o;
        if (diff<0)
        {
            diff = -diff;
        }
    
    printf ("\nThe Difference is: %d", diff);
    
    return 0;
}
