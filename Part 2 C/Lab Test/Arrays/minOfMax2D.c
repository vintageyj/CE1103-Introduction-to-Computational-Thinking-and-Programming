#include <stdio.h>
#define SIZE 10
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize);
int main()
{
    int ar[SIZE][SIZE], rowSize, colSize;
    int i, j, min;

    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i = 0; i < rowSize; i++)
        for (j = 0; j < colSize; j++)
            scanf("%d", &ar[i][j]);
    min = minOfMax2D(ar, rowSize, colSize);
    printf("minOfMax2D(): %d\n", min);
    return 0;
}
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize)
{
    int i, j, max[rowSize];
    for (i = 0; i < rowSize; i++)
    {
        max[i] = ar[i][0];
        for (j = 1; j < colSize; j++)
        {
            if (ar[i][j] > max[i])
                max[i] = ar[i][j];
        }
    }
    int k, min = max[0];
    for (k = 1; k < rowSize; k++)
    {
        if (max[k] < min)
           min = max[k];
    }
    return min;
}