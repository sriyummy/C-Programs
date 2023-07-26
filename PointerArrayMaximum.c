#include <stdio.h>
#include <stdlib.h>

void arrIni (int array[], int size);
int arrMax (int *array, int size);

int main()
{
    int n;
    printf ("Enter the number of elements you want to have in the array: ");
    scanf ("%d", &n);

    int *arr = (int*)malloc(n*sizeof(int));

    arrIni (arr, n);
    
    printf ("The largest element in the array is: %d", arrMax (arr, n));

    return 0;
}

void arrIni (int array[], int size)
{
    int i;

    for (i=0; i<size; i++)
    {
        printf ("Enter element number: %d ", i+1);
        scanf ("%d", &array[i]);
    }
}

int arrMax (int *array, int size)
{
    int gr = *array, i;

    for (i=1; i<size; i++)
    {
        if (*(array+1) > gr)
        {
            gr = *(array+1);
        }
    }

    return gr;
}