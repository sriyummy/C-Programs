#include <stdio.h>
#include <string.h>

void subStr (char string[]);

int main()
{
    char str1[100];
    
    printf ("Enter a string: ");
    gets (str1);
    
    subStr(str1);
    
    return 0;
}

void subStr(char string[])
{
    int len, i, s, e;
    
    printf ("\nEnter the starting and ending indices of the substring you want to print: ");
    scanf ("%d%d", &s, &e);
    
    len = strlen (string);
    
    if (e<=len)
    {
        for (i=s; i<e; i++)
        {
            printf ("%c", string[i]);
        }
    }
}
