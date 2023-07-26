#include <stdio.h>

int main()
{
    int c=1;

    while (1)
    {
        if (c==5)
            break;

        printf ("%d", c);
            c++;
    }
    
    return 0;
}