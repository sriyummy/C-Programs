#include <stdio.h>
#include <string.h>

void strRev (char string[]);

int main()
{
    char str1[100];
    
    printf ("Enter a string: ");
    gets (str1);
    
    strRev(str1);
    
    return 0;
}

void strRev(char string[])
{
    int len, i, j;
    
    len = strlen (string);
    char str2[len];
    
    j=len-1;
    for (i=0; i<len; i++)
    {
        str2[i] = string[j];
        j--;
    }
    
    printf ("The reversed string is: %s", str2);
}
