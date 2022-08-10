#include <stdio.h> 
#include <string.h>
#include <ctype.h>
int countWords(char *s);
int main()
{
    char str[50], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("countWords(): %d", countWords(str));
    return 0;
}
int countWords(char *s)
{
    int count = 0, i, word = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (isalnum(s[i]))
        {
            word += 1;
            if (word == 1)
                count += 1;
        }
        else
        {
            word = 0;
        }
    }
    return count;
}