#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fiboGen(i));
    }

    return 0;
}

int fiboGen (int n)
{
    if (n <= 1)
    {
        return n;
    } 
    else
    {
        return fiboGen(n - 1) + fiboGen(n - 2);
    }
}
