#include <stdio.h>
#include <stdlib.h>

void countVowCon(char *string, int *vowels, int *consonants);

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int v = 0;
    int c = 0;

    countVowCon(str, &v, &c);

    printf("The number of vowels is: %d and the number of consonants is: %d\n", v, c);

    return 0;
}

void countVowCon(char *string, int *vowels, int *consonants)
{
    while (*string != '\0')
    {
        if (*string == 'a' || *string == 'A' || *string == 'e' || *string == 'E' || *string == 'i' || *string == 'I' || *string == 'o' || *string == 'O' || *string == 'u' || *string == 'U')
        {
            (*vowels)++;
        }
        else if ((*string > 'a' && *string <= 'z') || (*string > 'A' && *string <= 'Z'))
        {
            (*consonants)++;
        }

        string++;
    }
}
