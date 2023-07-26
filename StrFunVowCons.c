#include <stdio.h>
#include <string.h>

void vowCons (char string[]);

int main()
{
    char str1[100];
    
    printf ("Enter a string: ");
    gets (str1);
    
    vowCons(str1);
    
    return 0;
}

void vowCons(char string[])
{
    int len, i, v=0, c=0;
    len = strlen (string);
    
    for (i=0; i<len; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    
    printf ("The number of vowels is: %d, and the number of consonants is: %d", v, c);
}
