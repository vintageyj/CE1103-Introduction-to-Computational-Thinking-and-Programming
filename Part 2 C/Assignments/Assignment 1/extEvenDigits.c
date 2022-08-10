/*edit*/

/*custom header*/
#include <math.h>
/*end_edit*/
#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
    int number, result = INIT_VALUE;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);
    return 0;
}
int extEvenDigits1(int num)
{
    /*edit*/
    /* Write your code here */
    int result = 0, ar[INIT_VALUE], noOfEven = 0;
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            ar[noOfEven] = num - (num / 10) * 10;
            noOfEven++;
        }
        num = num / 10;
    }
    if (noOfEven == 0)
    {
        result = -1;
    }
    else
    {
        int i;
        for (i = noOfEven - 1; i >= 0; i--)
        {
            result += ar[i] * pow(10, i);
        }
    }
    return result;
    /*end_edit*/
}
void extEvenDigits2(int num, int *result)
{
    /*edit*/
    /* Write your code here */
    int my_result = 0, ar[INIT_VALUE], noOfEven = 0;
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            ar[noOfEven] = num - (num / 10) * 10;
            noOfEven++;
        }
        num = num / 10;
    }
    if (noOfEven == 0)
    {
        my_result = -1;
    }
    else
    {
        int i;
        for (i = noOfEven - 1; i >= 0; i--)
        {
            my_result += ar[i] * pow(10, i);
        }
    }
    *result = my_result;
    /*end_edit*/
}