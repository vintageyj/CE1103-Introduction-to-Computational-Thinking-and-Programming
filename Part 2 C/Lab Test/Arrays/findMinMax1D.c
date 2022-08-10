#include <stdio.h>
void findMinMax1D(int ar[], int size, int *min, int *max);
int main()
{
    int ar[40];
    int i, size;
    int min, max;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);
    findMinMax1D(ar, size, &min, &max);
    printf("min = %d; max = %d\n", min, max);
    return 0;
}
void findMinMax1D(int ar[], int size, int *min, int *max)
{
    int j;
    *min = ar[0];
    *max = ar[0];
    for (j = 1; j < size; j++)
    {
        if (ar[j] > *max)
            *max = ar[j];
        else if (ar[j] < *min)
            *min = ar[j];
    }
}