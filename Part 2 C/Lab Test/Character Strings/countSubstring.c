#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1
int countSubstring(char str[], char substr[]);
int main()
{
    char str[80], substr[80], *p;
    int result = INIT_VALUE;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p = strchr(substr, '\n'))
        *p = '\0';
    result = countSubstring(str, substr);
    printf("countSubstring(): %d\n", result);
    return 0;
}
int countSubstring(char str[], char substr[])
{
    if (strstr(str, substr))
    {
        int count = 0, i, j, similarCount;
        for (i = 0; i < strlen(str); i++)
        {
            similarCount = 0;
            if (str[i] == substr[0])
            {
                similarCount = 1;
                for (j = 1; j < strlen(substr); j++)
                {
                    if (str[i + j] == substr[j])
                        similarCount += 1;
                }
                if (similarCount == strlen(substr))
                    count += 1;
            }
        }
        return count;
    }
    else
        return 0;
}
