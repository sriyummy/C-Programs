#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, c=0;
    
    printf ("Enter your name: ");
    gets (name);
    
    for (i=0; name[i] != '\0'; i++)
    {
        if (name[i] != ' ')
        {
            c++;
        }
    }
    
    printf ("Length of your name is: %d", c);
    
    return 0;
}
