#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    printf("Elements of the array using pointer arithmetic:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}

