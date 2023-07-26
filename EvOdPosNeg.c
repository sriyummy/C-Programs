#include <stdio.h>

int main()
{
    int n, i;

    printf ("Enter a number to check if it is positive, negative, even or odd: ");

    for (i=1; i<=18; i++)
    {
        printf ("\nEnter input number %d", i);
        scanf ("%d", n);

        if (n%2 == 0)
        {
           printf ("%d is even", n);
        }
        else
        {
            printf ("%d is odd", n);
        }
    }


    return 0;
}