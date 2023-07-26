#include <stdio.h>

int main()
{
    int n;

    printf ("Enter the integer that you want to shift 2 bits to the left by: ");
    scanf ("%d", &n);

    n<<=2;

    printf ("Your shifted data is: %d", n);

    return 0;
}