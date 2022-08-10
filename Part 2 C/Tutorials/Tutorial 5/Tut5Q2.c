#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float operand1, operand2;
    char op; /* operator ‘+’,‘‐’,‘*’ or ‘/’ */
} bexpression;

float compute1(bexpression expr);
float compute2(bexpression *expr);

int main()
{
    bexpression expr[1];
    printf("Enter operand 1:\n");
    scanf("%f", &expr[0].operand1);
    printf("Enter operand 2:\n");
    scanf("%f", &expr[0].operand2);
    printf("Enter the operator:\n");
    scanf("%s", &expr[0].op);
    printf("compute1:\n%f %c %f = %f", expr[0].operand1, expr[0].op, expr[0].operand2, compute1(expr[0]));
    printf("\ncompute2:\n%f %c %f = %f", expr[0].operand1, expr[0].op, expr[0].operand2, compute2(&expr[0]));
    return 0;
}
float compute1(bexpression expr)
{
    float result;
    switch (expr.op)
    {
    case '+':
        result = expr.operand1 + expr.operand2;
        break;
    case '-':
        result = expr.operand1 - expr.operand2;
        break;
    case '/':
        result = expr.operand1 / expr.operand2;
        break;
    case '*':
        result = expr.operand1 * expr.operand2;
        break;
    }
    return result;
}
float compute2(bexpression *expr)
{
    float result;
    switch ((*expr).op)
    {
    case '+':
        result = (*expr).operand1 + (*expr).operand2;
        break;
    case '-':
        result = (*expr).operand1 - (*expr).operand2;
        break;
    case '/':
        result = (*expr).operand1 / (*expr).operand2;
        break;
    case '*':
        result = (*expr).operand1 * (*expr).operand2;
        break;
    }
    return result;
}