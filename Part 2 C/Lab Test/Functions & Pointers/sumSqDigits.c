#include <stdio.h>
#include <math.h>
int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);
int main()
{
    int num, result;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
    sumSqDigits2(num, &result);
    printf("sumSqDigits2(): %d\n", result);
    return 0;
}
int sumSqDigits1(int num)
{
    int x, sum = 0;
    while (num)
    {
        x = num / 10 * 10;
        sum += pow(num - x, 2);
        num /= 10;
    }
    return sum;
}
void sumSqDigits2(int num, int *result)
{
    int x;
    *result = 0;
    while (num)
    {
        x = num / 10 * 10;
        *result += pow(num - x, 2);
        num /= 10;
    }
}