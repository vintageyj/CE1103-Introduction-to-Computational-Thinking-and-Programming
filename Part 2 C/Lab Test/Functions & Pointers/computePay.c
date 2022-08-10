#include <stdio.h>
double computePay1(int noOfHours, int payRate);
void computePay2(int noOfHours, int payRate, double *grossPay);
int main()
{
    int noOfHours, payRate;
    double grossPay;
    printf("Enter number of hours: \n");
    scanf("%d", &noOfHours);
    printf("Enter hourly pay rate: \n");
    scanf("%d", &payRate);
    printf("computePay1(): %.2f\n", computePay1(noOfHours, payRate));
    computePay2(noOfHours, payRate, &grossPay);
    printf("computePay2(): %.2f\n", grossPay);
    return 0;
}
double computePay1(int noOfHours, int payRate)
{
    double salary = 0;
    int overTime = 0;
    if (noOfHours > 160)
    {
        overTime = noOfHours - 160;
        salary = 160 * payRate + overTime * payRate * 1.5;
    }
    else
    {
        salary = noOfHours * payRate;
    }
    return salary;
}
void computePay2(int noOfHours, int payRate, double *grossPay)
{
    int overTime = 0;
    if (noOfHours > 160)
    {
        overTime = noOfHours - 160;
        *grossPay = 160 * payRate + overTime * payRate * 1.5;
    }
    else
    {
        *grossPay = noOfHours * payRate;
    }
}