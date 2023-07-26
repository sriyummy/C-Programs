#include <stdio.h>

int maxArr(int *array, int size);

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    printf("The largest element in the array is: %d", maxArr(arr, 5));
    
    return 0;
}

int maxArr(int *array, int size)
{
    int *p_arr;
    int max;
    p_arr = array;
    
    max = *p_arr;
    
    for (int i = 1; i < size; i++)
    {
        if (p_arr[i] > max)
        {
            max = p_arr[i];
        }
    }
    
    return max;
}

