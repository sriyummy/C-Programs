#include <stdio.h>
#include <string.h>

int main()
{
    int len, i;
    char str1[100];
    
    printf ("Enter a string: ");
    gets (str1);
    
    len = strlen (str1);
    
    for (i=0; i<len; i++)
    {
        if (str1[i] == ' ')
        {
            printf ("%c ", str1[i-1]);
        }
    }
    printf ("%c ", str1[len-1]);
    
    return 0;
    
}
