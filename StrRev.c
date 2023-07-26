#include <stdio.h>
#include <string.h>

int main()
{
    int len, i;
    char str1[100], str2[100];
    
    printf ("Enter a string:");
    gets (str1);
    
    len = strlen (str1);
    
    for (i=0; i<len; i++)
    {
        str2[i] = str1[len-i-1];
    }
    
    printf ("Reversed string is: %s", str2);
    
    return 0;
}
