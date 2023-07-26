#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    int i, c=0, len;
    
    printf ("Enter the first string: ");
    gets (str1);
    
    len = strlen(str1);
    char str2[len];
    
    for (i=0; i<len; i++)
    {
        str2[i] = str1[i];
    }
    
    printf ("Original String: ");
    for (i=0; i<len; i++)
    {
        printf ("%c", str1[i]);
    }
    printf ("\nCopied String: ");
    for (i=0; i<len; i++)
    {
        printf ("%c", str2[i]);
    }
    
    return 0;
}
