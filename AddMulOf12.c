#include <stdio.h>

int main()
{
    int i, sum=0;

    for (i=1; i<=100; i++)
    {
        if (i%12 != 0)
        {
            sum = sum + i;
        }
    }

    printf ("The sum of all non-multiples of 12 between 1 and 100 is: %d", sum);

    return 0;
}