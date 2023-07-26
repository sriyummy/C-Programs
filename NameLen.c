#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    
    printf ("Enter your name: ");
    gets (name);
    
    printf ("The length of your name is: %d", strlen(name));
    
    return 0;
}
