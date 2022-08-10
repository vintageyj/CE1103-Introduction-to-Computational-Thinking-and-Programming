#include <stdio.h>
void computeTotal(int numOfLines);
int main()
{
    int numOfLines;
    printf("Enter number of lines: \n");
    scanf("%d", &numOfLines);
    computeTotal(numOfLines);
    return 0;
}
void computeTotal(int numOfLines)
{
    int i;
    for (i = 1; i <= numOfLines; i++)
    {
        int n, j, x, total = 0;
        printf("Enter line %d:\n", i);
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &x);
            total += x;
        }
        printf("Total: %d\n", total);
    }
}
