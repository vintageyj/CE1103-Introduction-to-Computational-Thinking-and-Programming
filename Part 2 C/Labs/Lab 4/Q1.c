#include <stdio.h>
#include <string.h>
char *sweepSpace1(char *str);
char *sweepSpace2(char *str);
int main()
{
    char str[80], str2[80], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p == strchr(str, '\n')) *p = '\0';
    strcpy(str2, str);
    printf("sweepSpace1(): %s", sweepSpace1(str));
    printf("sweepSpace2(): %s", sweepSpace2(str2));
    return 0;
}

// array notation
char *sweepSpace1(char *str)
{
    int i, j = 0;
    for (i=0; i <= strlen(str); i++)
        if (str[i] != ' ')
            str[j++] = str[i];
    return str;
}

// pointer notation
char *sweepSpace2(char *str)
{
    int x, y = 0;
    for (x=0; x <= strlen(str); x++)
        if (*(str+x) != ' ')
            *(str + y++) = *(str+x);
    return str;
}