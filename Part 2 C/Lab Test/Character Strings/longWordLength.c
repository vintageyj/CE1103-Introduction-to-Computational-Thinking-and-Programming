#include <stdio.h>
#include <string.h>
#include <ctype.h>
int longWordLength(char *s);
int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}
int longWordLength(char *s)
{
    int i, length = 0, maxLength = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
            length += 1;
        else
            length = 0;
        if (length > maxLength)
            maxLength = length;
    }
    return maxLength;
}