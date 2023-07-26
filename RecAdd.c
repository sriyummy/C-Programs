#include <stdio.h>

int adder (int x, int y);

int main()
{
    int a, b;
    
    printf ("Enter two numbers to add: ");
    scanf ("%d%d", &a, &b);
    
    printf ("The sum of %d and %d is %d", a, b, adder (a, b));
    
    return 0;
}

int adder (int x, int y)
{
    if (y==0)
    {
        return x;
    }
    else
    {
        return (adder (x+1, y-1));
    }
}
