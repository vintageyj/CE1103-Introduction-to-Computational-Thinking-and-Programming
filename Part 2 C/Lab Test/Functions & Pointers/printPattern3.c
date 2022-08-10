#include <stdio.h>
void printPattern3(int height);
int main()
{
    int height;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("printPattern3(): \n");
    printPattern3(height);
    return 0;
}
void printPattern3(int height)
{
    int i,j;
    for (i = 1; i <= height; i ++)
    {
        for (j = 0; j < i; j++)
        {

            if (i + j < 10)
                printf("%d", i + j);
            else
            {
                printf("%d", i + j - 10);
            }
            
        }
        printf("\n");
    }
}