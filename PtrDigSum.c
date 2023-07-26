#include <stdio.h>

int digSum (int* po1);

int main()
{
    int a;
    
    int* p1=&a;
    
    printf ("Enter a number: ");
    scanf ("%d", p1);
    
    printf ("%d is the sum of the digits", digSum (p1));
    
    return 0;
}

int digSum (int* po1)
{
    int sum=0;
    
    while (*po1 != 0)
    {
        sum = sum + *po1%10;
        *po1/=10;
    }
    
    return sum;
}
