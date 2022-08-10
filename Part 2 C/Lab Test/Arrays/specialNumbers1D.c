#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size);
int main()
{
    int a[20], i, size = 0, num;

    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    return 0;
}
void specialNumbers1D(int ar[], int num, int *size)
{
    int j, a, b, c, sumCubes;
    for (j = 100; j < num; j++)
    {
        a = j / 100;
        b = j / 10 - a * 10;
        c = j - j / 10 * 10;
        sumCubes = (a * a * a) + (b * b * b) + (c * c * c);
        if (sumCubes == j)
        {
            ar[*size] = j;
            *size += 1;
        }
    }
}