#include <stdio.h>
#include <stdlib.h>
int main()
{
    int height, limit = 1, i, j;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("Pattern: \n");
    for (i = 1; i <= height; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d", limit);
        }
        printf("\n");
        ++limit;
        if (limit == 4)
        {
            limit = 1;
        }
    }
    return 0;
}
