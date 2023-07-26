#include <stdio.h>

int main()
{
    int sum=0, i, avg;
    int a[10];
    
    printf ("Enter 10 values to find their average: ");
    
    for (i=0; i<10; i++)
    {
        scanf ("%d", &a[i]);
        sum = sum+a[i];
    }
    avg = sum/10;
    
    printf ("The average of the inputs in your array is: %d", avg);
    
    return 0;
}
