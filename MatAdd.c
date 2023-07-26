#include <stdio.h>

int main()
{
    int r, c, i, j;
    
    printf ("Enter the number of rows and number of columns of the matrix: ");
    scanf ("%d%d", &r, &c);
    
    int arr1[r][c], arr2[r][c], arr3[r][c];
    
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf ("Enter element number: %d%d of Matrix 1: ", i, j);
            scanf ("%d", &arr1[i][j]);
        }
    }
    
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf ("Enter element number: %d%d of Matrix 2: ", i, j);
            scanf ("%d", &arr2[i][j]);
        }
    }
    
    printf ("\n Resultant Matrix is: ");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            printf ("%d ", arr3[i][j]);
        }
        printf ("\n");
    }
    
    return 0;
}
