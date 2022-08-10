#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    int a = 5, i;
    srand(time(NULL));
    for (i = 0; i < a; i++)
    {
        printf("%d ", rand() % 100);
    }
    char s[80], *p, dummy;
    float x;

    printf("\nEnter your float x:\n");
    scanf("%f", &x);
    printf("Enter your string s:\n");
    scanf("%c", &dummy);
    fgets(s, 80, stdin);
    if (p = strchr(s, '\n'))
        *p = '\0';
    printf("You have entered %s & %.2f.", s, x);
    return 0;

    /*#include <stdio.h>
    #include <ctype.h>
    #include <stdlib.h>*/

    int i = 0, expand = 0, j, n, k;
    char str[40], num[40];
    while (str[i])
    {
        if (expand == 0)
        {
            if (isalpha(str[i]))
                printf("%c", str[i]);
            else if (str[i] == '[')
                expand = 1;
                j = 0;
        }
        else
        {
            if (str[i] == ']')
                expand = 0;
            else if (isdigit(str[i]))
            {
                num[j] = str[i];
                j += 1;
            }
            else if (isalpha(str[i]))
            {
                num[j] = '\0';
                n = atoi(num);
                for (k = 0; k < n; k++)
                {
                    printf("%c", str[i]);
                }
            }
        }
        i += 1;
    }
}
