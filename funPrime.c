#include <stdio.h>

void primeFind (int l, int h);

int main()
{
    int lp, hp;
    
    printf ("Enter the lowest and highest value of the range: ");
    scanf ("%d%d", &lp, &hp);
    
    primeFind (lp, hp);
    
    return 0;
}

void primeFind (int l, int h)
{
    int i, j, c;
    
    for (i=l; i<h; i++)
    {
        c=0;
        
        for (j=1; j<i; j++)
        {
            if (i%j == 0)
            {
                c+=1;
            }
        }
        
        if (c<2)
        {
            printf ("%d is a prime number", i);
        }
    }
}
