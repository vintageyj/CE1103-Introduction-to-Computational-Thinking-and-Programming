/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
void readInput(int *id, int *noOfHours, int *payRate);
double computeSalary1(int noOfHours, int payRate);
void computeSalary2(int noOfHours, int payRate, double *grossPay);
int main()
{
    int id = -1, noOfHours, payRate;
    double grossPay;

    readInput(&id, &noOfHours, &payRate);
    while (id != -1)
    {
        printf("computeSalary1(): ");
        grossPay = computeSalary1(noOfHours, payRate);
        printf("ID %d grossPay %.2f \n", id, grossPay);
        printf("computeSalary2(): ");
        computeSalary2(noOfHours, payRate, &grossPay);
        printf("ID %d grossPay %.2f \n", id, grossPay);
        readInput(&id, &noOfHours, &payRate);
    }
    return 0;
}
void readInput(int *id, int *noOfHours, int *payRate)
{
    /*edit*/
    /* Write your code here */
    printf("Enter ID (-1 to end):\n");
    scanf("%d", id);
    if (*id != -1)
    {
        printf("Enter number of hours:\n");
        scanf("%d", noOfHours);
        printf("Enter hourly pay rate:\n");
        scanf("%d", payRate);
    }
    /*end_edit*/
}
double computeSalary1(int noOfHours, int payRate)
{
    /*edit*/
    /* Write your code here */
    if (noOfHours < 0) noOfHours = 0;
    double gross_pay;
    int overTime = 0;
    if (noOfHours > 160)
    {
        int overTime;
        overTime = noOfHours - 160;
        gross_pay = (160 * payRate) + (overTime * payRate * 1.5);
    }
    else
    {
        gross_pay = noOfHours * payRate;
    }
    return gross_pay;
    /*end_edit*/
}
void computeSalary2(int noOfHours, int payRate, double *grossPay)
{
    /*edit*/
    /* Write your code here */
    if (noOfHours < 0) noOfHours = 0;
    int gross_pay, overTime = 0;
    if (noOfHours > 160)
    {
        int overTime;
        overTime = noOfHours - 160;
        gross_pay = (160 * payRate) + (overTime * payRate * 1.5);
    }
    else
    {
        gross_pay = noOfHours * payRate;
    }
    *grossPay = gross_pay;
    /*end_edit*/
}