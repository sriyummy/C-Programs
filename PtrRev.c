#include <stdio.h>

int revNum (int *po1);

int main()
{
    int a;
    
    int *p1=&a;
    
    printf ("Enter a number: ");
    scanf ("%d", p1);
    
    printf ("%d is the reverse of a number", revNum (p1));
    
    return 0;
}

int revNum (int *po1)
{
    int rev=0;
    
    while (*po1 != 0)
    {
        rev = (rev*10) + (*po1%10);
        *po1/=10;
    }
    
    return rev;
}
