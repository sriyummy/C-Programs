#include <stdio.h>

int main()
{
    int a, fact=1;

    printf ("Enter the number you want to print the factorial of: ");
    scanf ("%d", &a);

    gt1:
        fact = fact*a;
        a--;

        if (a>0)
        {
            goto gt1;
        }
    
    printf ("The factorial of your input is: %d", fact);

    return 0;
}