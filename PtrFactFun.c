#include <stdio.h>

int factFind (int *po1);

int main()
{
    int a;
    
    int *p1=&a;
    
    printf ("Enter a number: ");
    scanf ("%d", p1);
    
    printf ("%d is the factorial of the number", factFind (p1));
    
    return 0;
}

int factFind (int *po1)
{
    int f=1, i;
    
    for (i=*po1; i>=1; i--)
    {
        f= f*i;
    }
    
    return f;
}
