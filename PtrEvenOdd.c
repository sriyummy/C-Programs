#include <stdio.h>

void checkEvenOdd(int* number) 
{
    if (*number % 2 == 0) 
    {
        printf("%d is even.\n", *number);
    } else 
    {
        printf("%d is odd.\n", *number);
    }
}

int main() 
{
    int number;
    int* ptr = &number;

    printf("Enter a number: ");
    scanf("%d", ptr);

    checkEvenOdd(ptr);

    return 0;
}

