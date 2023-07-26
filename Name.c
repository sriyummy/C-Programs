#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    
    printf ("Enter your name: ");
    gets (str);
    
    printf ("Wow, your name is:");
    printf ("%s", str);
    
    return 0;
}
