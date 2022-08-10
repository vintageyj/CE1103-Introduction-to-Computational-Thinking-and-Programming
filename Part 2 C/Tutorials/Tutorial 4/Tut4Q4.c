#include <stdio.h>

int stringcmp1(char *s1, char *s2);
int stringcmp2(char *s1, char *s2);

int main()
{

}

// pointer notation
int stringcmp1(char *s1, char *s2)
{
    while(1)
    {
        if (*s1 == '\0' && *s2 == '\0')
            return 0;
        else if (*s1 == '\0')
            return -1;
        else if (*s2 == '\0')
            return 1;
        else if (*s1 < *s2)
            return -1;
        else if (*s1 > *s2)
            return 1;
        s1++;
        s2++;
    }
}

// array notation
int stringcmp2(char *s1, char *s2)
{
    int i = 0;
    while (1)
    {
        if (s1[i] == '\0' && s2[i] == '\0')
            return 0;
        else if (s1[i] == '\0')
            return -1;
        else if (s2[i] == '\0')
            return 1;
        else if (s1[i] < s2[i])
            return -1;
        else if (s1[i] > s2[i])
            return 1;
        i++;
    }
}