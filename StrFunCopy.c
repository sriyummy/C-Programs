#include <stdio.h>
#include <string.h>

void strCopier (char string[]);

int main()
{
    char str1[100];
    
    printf ("Enter a string: ");
    gets (str1);
    
    printf ("Original string: %s", str1);
    
    strCopier(str1);
    
    return 0;
}

void strCopier (char string[])
{
    int len = strlen(string);
    char str2[len];
    int i;
    
    for (i=0; i<len; i++)cd 
    {
        str2[i] = string[i];
    }
    
    printf ("\nCopied string: %s", str2);
}
