#include <stdio.h>

int main()
{
    int lines, numbers, l;
    printf("Enter number of lines: \n");
    scanf("%d", &lines);
    for(l = 1; l <= lines; l++)
    {
        int total = 0;
        float sum = 0.0;
        printf("Enter line %d (end with -1): \n", l);
        scanf("%d", &numbers);
        while (numbers != -1)
        {
            sum += numbers;
            scanf("%d", &numbers);
            ++total;
        }
        printf("Average = %.2f \n", sum/total);
    }
    return 0;
}
