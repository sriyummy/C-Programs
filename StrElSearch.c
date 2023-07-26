#include <stdio.h>

int main() 
{
    char str[100], ch;
    int i, f = 0;
    
    printf("Enter a string: ");
    gets (str);
    
    printf("Enter a character to search: ");
    scanf("%c", &ch);
    
    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == ch) 
        {
            f = 1;
            break;
        }
    }
    
    if(f) 
    {
        printf("'%c' is found at index %d\n", ch, i);
    } 
    else 
    {
        printf("'%c' is not found in the string\n", ch);
    }
    
    return 0;
}

