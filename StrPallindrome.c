#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i, j, len, c = 1;
    
    printf("Enter a string: ");
    gets(str);
    
    len = strlen(str);
    
    for (i = 0, j = len - 1; i < len / 2; i++, j--) 
    {
        if (str[i] != str[j]) 
        {
            c = 0;
            break;
        }
    }
    
    if (c)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);
    
    return 0;
}

