#include <stdio.h>

int prodFind (int x, int y);

int main()
{
    int a, b;
    
    printf ("Enter the numbers you want to multiply: ");
    scanf ("%d%d", &a, &b);
    
    printf ("The product of %d and %d is: %d", a, b, prodFind(a, b));
    
    return 0;
}

int prodFind (int x, int y)
{
    if (y==0)
    {
        return 0;
    }
    else
    {
        return x + prodFind(x, y-1);
    }
}
