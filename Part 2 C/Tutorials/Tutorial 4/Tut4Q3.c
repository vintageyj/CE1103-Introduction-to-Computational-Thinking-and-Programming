#include <stdio.h>

char *strncpy(char * s1, char * s2, int n);

char M2[40] = "Beat the clock.";
char *M3 = "chat";
char M4[20] = "Super star";

int main()
{
   puts(stringncpy(M2, M4, 5));
   return 0;
}
char *stringncpy(char *s1, char *s2, int n)
{
    int i,j;
    for (i=0;i<n;i++)
    {
        if (s2[i] != '\0')
            s1[i] = s2[i];
        else
            break;
    }
    s1[i] = '\0';
    for (j=i; j<n; j++)
        s1[j] = '\0';
    return s1;
}