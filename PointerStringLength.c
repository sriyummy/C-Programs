#include <stdio.h>
#include <stdlib.h>

void lenString (char *string);

int main()
{
    char str[100];

    printf ("Enter a string: ");
    gets (str);

    lenString (str);

    return 0;
}

void lenString (char *string)
{
    int len = 0;
    
    while (*string != '\0')
    {
        len++;
        string++;
    }

    printf ("The length of the string is: %d characters long", len);
}
