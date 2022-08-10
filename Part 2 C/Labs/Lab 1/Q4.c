#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float e, x, result = 1;
    printf("Enter x: \n");
    scanf("%f", &x);
    int i, factorial = 1;
    for (i=1; i<=10; ++i)
    {
        factorial *= i;
        result += pow(x, i)/factorial;
    }
    printf("Result = %.2f \n", result);
    return 0;
}