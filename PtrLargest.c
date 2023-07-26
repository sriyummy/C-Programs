#include <stdio.h>

int maxNum (int* po1, int* po2, int* po3);

int main()
{
    int a, b, c;
    
    int* p1=&a;
    int* p2=&b;
    int* p3=&c;
    
    printf ("Enter three numbers to check the largest value amongst them: ");
    scanf ("%d%d%d", p1, p2, p3);
    
    printf ("%d is the largest number", maxNum (p1, p2, p3));
    
    return 0;
}

int maxNum (int* po1, int* po2, int* po3)
{
    int max;
    
    if (*po1 > *po2)
    {
        if (*po1 > *po3)
        {
            max = *po1;
        }
        else
        {
            max = *po3;
        }
    }
    else
    {
        max =*po2;
        
        if(*po3> *po2)
        {
            max = *po3;
        }
    }
    
    return max;
}
