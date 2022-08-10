#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()
{
    char str[80], *p;
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}
void maxCharToFront(char *str)
{
    int i, j, maxpos = 0;
    char max = str[0], temp;
    for (i = 1; i < strlen(str); i++)
    {
        if (str[i] > max)
        {
            max = str[i];
            maxpos = i;
        }
    }
    for (j = maxpos; j > 0; j--)
    {
        str[j] = str[j-1];
    }
    str[0] = max;
}