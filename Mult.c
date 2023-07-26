#include <stdio.h>

int main()
{
    int n1, n2;

    printf ("Enter two numbers to check whether the second number is a multiple of the first number: ");
    scanf ("%d%d", &n1, &n2);

    if (n2%n1 == 0)
    {
        printf ("%d is a multiple of %d", n2, n1);
    }
    else
    {
        printf ("%d is not a multiple of %d", n2, n1);
    }

    return 0;

}