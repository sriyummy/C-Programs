#include <stdio.h>

void alphaPrint()
{
    char alpha = 'A';
    char *ptr = &alpha;

    printf("Alphabets: ");

    while (*ptr <= 'Z')
    {
        printf("%c ", *ptr);
        (*ptr)++;
    }

    printf("\n");
}

int main()
{
    alphaPrint();

    return 0;
}

