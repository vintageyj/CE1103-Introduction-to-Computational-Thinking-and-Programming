#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
    int power;
    float number, result = -1;
    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("power1(): %.2f\n", power1(number, power));
    power2(number, power, &result);
    printf("power2(): %.2f\n", result);
    return 0;
}
float power1(float num, int p)
{
    float result = num;
    int i;
    if (p == 0)
        result = 1;
    else if (p > 0)
    {
        for (i = 1; i < p; i++)
            result *= num;
    }
    else if (p < 0)
    {
        for (i = 0; i <= -p; i++)
            result /= num;
    }
    return result;
}
void power2(float num, int p, float *result)
{
    *result = num;
    int i;
    if (p == 0)
        *result = 1;
    else if (p > 0)
    {
        for (i = 1; i < p; i++)
            *result *= num;
    }
    else if (p < 0)
    {
        for (i = 0; i <= -p; i++)
            *result = *result / num;
    }
}