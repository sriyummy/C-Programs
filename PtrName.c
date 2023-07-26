#include <stdio.h>

void printName(char *name);

int main()
{
    char name[50];
    
    printf ("Enter your name: ");
    gets (name);
    
    printName(name);

    return 0;
}

void printName(char *name)
{
    while (*name != '\0')
    {
        printf("%c", *name);
        name++; 
    }
}

