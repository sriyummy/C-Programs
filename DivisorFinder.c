#include <stdio.h>

int main()
{
    int num, i=1;

    printf ("Enter the number you want to find the divisors of: ");
    scanf ("%d", &num);

    printf ("\nThe divisors of %d are: %d", num, num);

    gt1:
        if (num%i == 0)
        {
            printf ("\n%d", i);
        }
        ++i;

    while (i<((num+1)/2))
    {
        goto gt1;
    }

    return 0;
}