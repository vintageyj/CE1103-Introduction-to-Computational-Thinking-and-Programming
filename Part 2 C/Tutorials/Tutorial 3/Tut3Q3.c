#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void transpose2D(int rowSize, int colSize, int ar[][colSize]);

int main()
{
    //srand(time(NULL));
    int size, rowSize, colSize;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    rowSize = size;
    colSize = size;
    int arr[rowSize][colSize], i, j;
    for (i=0;i<size;i++)
    {
        for (j=0;j<size;j++)
        {
            arr[i][j] = rand() % 10;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("vs.\n");
    transpose2D(rowSize, colSize, arr);
    for (i=0;i<size;i++)
    {
        for (j=0;j<size;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void transpose2D(int rowSize, int colSize, int ar[][colSize])
{
    int i, j, temp;
    for (i=1;i<rowSize;i++)
    {
        for (j=0;j<colSize;j++)
        {
            temp = ar[i][j];
            ar[i][j] = ar[j][i];
            ar[j][i] = temp;
        }
    }
}
