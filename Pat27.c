#include <stdio.h>  
int main()  
{
    int n, sum=0, i, j;
    
    printf ("Enter the number of places you want to repeat the pattern of 1 + (1+2) + (1+3).......(1+n) upto");
    scanf ("%d", &n);
    
    for (i=1; i<2 ; i++)
    {
        for (j=0; j<=n; ++j)
        {
            sum = sum + (i+j);
        }
    }
    
    printf ("The sum of the series is: %d", sum);
    
    return 0; 
}  
