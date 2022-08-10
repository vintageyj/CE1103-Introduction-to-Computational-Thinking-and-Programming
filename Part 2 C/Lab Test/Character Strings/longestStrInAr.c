#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 20
char *longestStrInAr(char str[N][40], int size, int *length);
int main()
{
    int i, size, length;
    char str[N][40], first[40], last[40], *p, *result;
    char dummychar;
    printf("Enter array size: \n");
    scanf("%d", &size);
    scanf("%c", &dummychar);
    for (i = 0; i < size; i++)
    {
        printf("Enter string %d: \n", i + 1);
        fgets(str[i], 40, stdin);
        if (p = strchr(str[i], '\n'))
            *p = '\0';
    }
    result = longestStrInAr(str, size, &length);
    printf("longest: %s \nlength: %d\n", result, length);
    return 0;
}
char *longestStrInAr(char str[N][40], int size, int *length)
{
    int i, j, count;
    *length = 0;
    char *longestStr;
    for (i = 0; i < size; i++)
    {
        count = 0;
        for (j = 0; j < strlen(str[i]); j++)
        {
            if (isalnum(str[i][j]))
                count += 1;
        }
        if (count > *length)
        {
            *length = count;
            longestStr = str[i];
        }
    }
    return longestStr;
}