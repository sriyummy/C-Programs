#include <stdio.h>

int main()
{
    int n, nn, r, sum=0;

    printf ("Enter a number to test whethet it is 50, or the sum of the digits is 50: ");
    scanf ("%d", &n);
    nn = n;

    while (nn>0)
    {
        r = nn % 10;
        sum = sum + r;

        nn/=10;
    }

    if ((n==50) || (sum==50))
    {
        printf ("True");
    }
    else
    {
        printf ("False");
    }

    return 0;
}