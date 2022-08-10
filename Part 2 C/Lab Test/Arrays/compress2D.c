#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
    int data[SIZE][SIZE];
    int i, j;
    int rowSize, colSize;
    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i = 0; i < rowSize; i++)
        for (j = 0; j < colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    int i, j, count0, count1;
    for (i = 0; i < rowSize; i++)
    {
        count0 = 0;
        count1 = 0;
        for (j = 0; j < colSize; j++)
        {
            if (data[i][j] == 0)
                count0++;
            else
                count1++;
        }
        if (data[i][0] == 0)
        {
            if (count0)
                printf("0 %d ", count0);
            if (count1)
                printf("1 %d", count1);
            printf("\n");
        }
        else
        {
            if (count1)
                printf("1 %d ", count1);
            if (count0)
                printf("0 %d", count0);
            printf("\n");
        }
    }
}