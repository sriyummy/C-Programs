#include <stdio.h>

void sortArray(int *arr, int size)
{
    int i, j;
    int *min;

    for (i = 0; i < size - 1; i++)
    {
        min = arr + i;

        for (j = i + 1; j < size; j++)
        {
            if (*(arr + j) < *min)
            {
                min = arr + j;
            }
        }

        if (min != arr + i)
        {
            int temp = *min;
            *min = *(arr + i);
            *(arr + i) = temp;
        }
    }
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {5, 3, 1, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    sortArray(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}

