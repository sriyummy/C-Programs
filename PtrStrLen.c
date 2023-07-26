#include <stdio.h>
#include <string.h>

int len (char *string);

int main()
{
    char str[100];
    
    printf ("Enter a string: ");
    gets (str);
    
    printf ("The length of the string is: %d", len(str));
}

int len (char *string)
{
    int c=0;
    
    while (*string != '\0')
    {
        c+=1;
        *string++;
    }
    
    return c;
}
