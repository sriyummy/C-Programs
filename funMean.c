#include <stdio.h>

float meanCalc (float x, float y);

int main()
{
    float a, b, m;
    
    printf ("Enter two number to find their mean: ");
    scanf ("%f%f", &a, &b);
    
    m = meanCalc (a, b);
    printf ("Mean = %f", m);
    
    return 0;
}

float meanCalc (float x, float y)
{
    return ((x+y)/2);
}
