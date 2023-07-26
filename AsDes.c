#include <stdio.h>

int main()
{
    int num1, num2;

    printf ("Enter two numbers: ");
    scanf ("%d%d", &num1, &num2);

    if (num1<num2)
    {
        printf ("The numbers entered are arranged in ascending order.");
    }

    else
    {
        printf ("The numbers are arranged in descending order.");
    }

    return 0;
}