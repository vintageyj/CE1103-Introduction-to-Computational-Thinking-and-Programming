// What does the following program print?

#include <stdio.h>
#include <string.h>
#define M1 "How are ya, sweetie?"
char M2[40] = "Beat the clock.";
char *M3 = "chat";

int main()
{
    char words[80];
    printf(M1);
    puts(M1);
    puts(M2);
    puts(M2 + 1);
    gets(words); /* user inputs: win a toy. */
    puts(words);
    scanf("%s", words + 6); /* user inputs : snoopy. */
    puts(words);
    words[3] = '\0';
    puts(words);
    while (*M3)
        puts(M3++);
    puts(--M3);
    puts(--M3);
    M3 = M1;
    puts(M3);
    return 0;
}

/*
program prints:

How are ya, sweetie?How are ya, sweetie?
Beat the clock.
eat the clock.
win a toy (user input)
win a toy
snoopy (user input)
win a snoopy
win
chat
hat
at
t
t
at
How are ya, sweetie?
*/