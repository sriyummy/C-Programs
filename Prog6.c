#include <stdio.h>

int main()
{
    int f=1; int c,n;

    printf ("Enter a number: ");
    scanf ("%d", &n);

    if (n<0)
        goto end;
    
    loop:
        c=1;
        f=f*c;
            c++;

    if (c<n)
        goto loop;
        printf ("........%d", f);
    end:
    return 0;
}