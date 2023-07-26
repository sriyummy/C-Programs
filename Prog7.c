#include <stdio.h>

int main()
{
    int f=1; int c, n;

    printf("enter a number: ");
    scanf ("%d", c);

    if (n<0)
        goto end;

    for (c=1; c<=n; c++)
        f=f*c;
    printf ("%d", f);
        end:
    
    return 0;
}