#include <stdio.h>
#include <stdlib.h>

void ptName (char *string);

int main()
{
    char name[25];

    printf ("Enter your name: ");
    gets (name);

    ptName (name);

    return 0;
}

void ptName (char *string)
{
    printf ("Your name is, %s", string);
}
