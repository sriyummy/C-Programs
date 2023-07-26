#include <stdio.h>

int main()
{
    int num, i;

    printf ("Enter the number you want to divide the numbers by: ");
    scanf ("%d", &num);

    printf ("\nThe numbers that on being divided by %d gives remainders of 2 or 3 are: ", num);

    for (i=1; i<=50; i++)
    {
        if ((i%num == 2) || (i%num == 3))
        {
            printf ("\n%d", i);
        }
    }

    return 0;
}