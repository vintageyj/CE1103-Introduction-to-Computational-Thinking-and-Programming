#include <stdio.h>
#include "Tut3Q1.c"
#include "Tut3Q2.c"
#include "Tut3Q3.c"
#include "Tut3Q4.c"
void question1();
int main()
{
    int n=0;
    do {
        printf("Which question would you like to run?\n");
        printf("Q1: 1\nQ2: 2\nQ3: 3\nQ4: 4\nEnter 1-4 (or -1 to exit): ");
        scanf("%d", &n);
        if (n == -1)
        {
            break;
        }
        else if (n<1 || n>4)
        {
            printf("Invalid input! Choose only 1-4, or -1.\n");
            continue;
        }
        else
        {
            if (n == 1)
            {
                printf("The output will be the same");
            }
        }
        
    } while (n != -1);
    return 0;
}