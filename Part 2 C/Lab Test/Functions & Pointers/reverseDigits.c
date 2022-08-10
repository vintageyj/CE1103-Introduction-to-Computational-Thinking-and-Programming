#include <stdio.h>
int reverseDigits1(int num);
void reverseDigits2(int num, int *result);
int main()
{
    int num, result = 999;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("reverseDigits1(): %d\n", reverseDigits1(num));
    reverseDigits2(num, &result);
    printf("reverseDigits2(): %d\n", result);
    return 0;
}
int reverseDigits1(int num)
{
    int reverse = 0, n;
    while (num)
    {
        n = num - (num / 10) * 10;
        reverse = reverse * 10 + n;
        num /= 10;
    }
    return reverse;
}
void reverseDigits2(int num, int *result)
{
    int n;
    *result = 0;
    while (num)
    {
        n = num - (num / 10) * 10;
        *result = *result * 10 + n;
        num /= 10;
    }
}