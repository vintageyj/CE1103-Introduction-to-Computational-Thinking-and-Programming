#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reduceMatrix2D(int rowSize, int colSize, int ar[][colSize]);

int main()
{
    srand(time(NULL));
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
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("is reduced to \n");
    reduceMatrix2D(rowSize, colSize, arr);
    return 0;
}
void reduceMatrix2D(int rowSize, int colSize, int ar[][colSize])
{
    int i,j, *p, sum;
    for (i=0;i<rowSize;i++)
    {
        sum = 0;
        for (j=i;j<colSize;j++)
        {
            sum += ar[j][i];
            ar[j][i] = 0;
        }
        ar[i][i] = sum;
    }
    for (i=0;i<rowSize;i++)
    {
        for (j=0;j<colSize;j++)
        {
            printf("%2d ", ar[i][j]);
        }
        printf("\n");
    }
}
