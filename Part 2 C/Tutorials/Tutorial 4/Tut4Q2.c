/*
The following unknown function receives a string argument
and a character argument, modifies the string argument and
returns an integer value. Describe the purpose of the
function. Give an example to support your answer
*/

#include <stdio.h>
#include <string.h>
int unknown(char str[], char c);
char mystring[80], x;
int main()
{
printf("Enter a string:\n");
gets(mystring);
printf("Enter a character:\n");
scanf("%c", &x);
printf("unknown: %d\n", unknown(mystring, x));
puts(mystring);

return 0;
}
// Function starts here
int unknown(char str[], char c)
{
    int x, y = 0, z = 0;
    for (x = 0; str[x] != '\0'; x++)
        if (str[x] != c)
            str[y++] = str[x];
        else
            z++;
    str[y] = '\0';
    return z;
}
// Function ends here

/*
The unknown function returns the number of characters
within the string that are the same as char c. 
The function also removes any char c from the string.

E.g.:
Enter a string:
hello my name is lester (user input)
Enter a character:
e (user input)
unknown: 4

Unknown function prints 4 since there are 4 'e's
in the user input string.
*/