/*edit*/

/*custom header*/

/*end_edit*/
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
    /*edit*/
    /* Write your code here */
    int max = ar[0], min = ar[0], i;
    int maxPos, minPos;
    for (i = 0; i < size; i++)
    {
        if (ar[i] >= max)
        {
            max = ar[i];
            maxPos = i;
        }
        if (ar[i] <= min)
        {
            min = ar[i];
            minPos = i;
        }
    }
    int temp1, temp2;
    temp1 = ar[maxPos];
    temp2 = ar[minPos];
    ar[maxPos] = temp2;
    ar[minPos] = temp1;
    /*end_edit*/
}