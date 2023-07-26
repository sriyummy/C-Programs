#include <stdio.h>
#include <string.h>

void vowCon (char *string);

int main()
{
    char str[100];
    
    printf ("Enter a string: ");
    gets (str);
    
    vowCon (str);
}

void vowCon (char *string)
{
    int v=0,c=0;
    
    while (*string != '\0')
    {
        if (*string == 'a'|| *string == 'A' || *string == 'e' || *string == 'E' || *string == 'i' || *string == 'I' || *string == 'o' || *string == 'O' || *string == 'u' || *string == 'U')
        {
            v+=1;
        }
        else
        {
            c+=1;
        }
       
        *string++;
    }
    
    printf ("The number of vowels is: %d\n The number of consonants is:  %d", v, c);
    
}
