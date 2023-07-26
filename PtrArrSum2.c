#include <stdio.h>

void sumArr(int *arr, int size, int *result);

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum;

    sumArr(arr, size, &sum);

    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}

void sumArr(int *arr, int size, int *result)
{
    int sum = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    *result = sum;
}
