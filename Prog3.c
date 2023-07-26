#include <stdio.h>

int main()
{
    int c=1;

    for (; c<=5; c++)
    {
        if (c==3)
            break;
        
        printf ("%d", c);
            c++;
    }
    
    return 0;
}