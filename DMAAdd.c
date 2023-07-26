#include <stdio.h>

int main()
{
    int* num1 = (int*)malloc(sizeof(int));
    int* num2 = (int*)malloc(sizeof(int));

    printf("Enter first number: ");
    scanf("%d", num1);

    printf("Enter second number: ");
    scanf("%d", num2);

    int sum = *num1 + *num2;

    printf("Sum: %d\n", sum);

    free(num1);
    free(num2);

    return 0;
}

