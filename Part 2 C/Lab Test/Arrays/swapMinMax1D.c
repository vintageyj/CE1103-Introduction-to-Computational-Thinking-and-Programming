#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main()
{
    int ar[50], i, size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", ar + i);
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i = 0; i < size; i++)
        printf("%d ", *(ar + i));
    return 0;
}
void swapMinMax1D(int ar[], int size)
{
    int min = 0, max = 0, i, temp;
    for (i = 1; i < size; i++)
    {
        if (ar[i] <= ar[min])
            min = i;
        if (ar[i] >= ar[max])
            max = i;
    }
    temp = ar[min];
    ar[min] = ar[max];
    ar[max] = temp;
}