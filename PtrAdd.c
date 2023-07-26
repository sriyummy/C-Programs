#include <stdio.h>

void addNumbers (int* num1, int* num2, int* sum)
{
    *sum = *num1 + *num2;
}

int main() 
{
    int num1, num2, sum;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* ptrSum = &sum;

    printf("Enter the first number: ");
    scanf("%d", ptr1);

    printf("Enter the second number: ");
    scanf("%d", ptr2);

    addNumbers(ptr1, ptr2, ptrSum);

    printf("The sum of %d and %d is %d\n", *ptr1, *ptr2, *ptrSum);

    return 0;
}
