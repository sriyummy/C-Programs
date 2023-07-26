#include <stdio.h>

int findL(int* arr, int size);

int main()
{
    int size;
    int* arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int*)malloc(size * sizeof(int));

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", arr + i);
    }

    int lar1 = findL(arr, size);

    printf("The largest element in the array is: %d\n", lar1);

    free(arr);

    return 0;
}

int findL(int* arr, int size)
{
    int lar = *arr;

    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > lar)
        {
            lar = *(arr + i);
        }
    }

    return lar;
}

