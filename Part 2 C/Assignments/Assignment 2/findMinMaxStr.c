#include <stdio.h>
#include <string.h>
#define SIZE 10
void findMinMaxStr(char word[][40], char *first, char *last, int size);
int main()
{
    char word[SIZE][40];
    char first[40], last[40];
    int i, size;
    printf("Enter size: \n");
    scanf("%d", &size);
    printf("Enter %d words: \n", size);
    for (i = 0; i < size; i++)
        scanf("%s", word[i]);
    findMinMaxStr(word, first, last, size);
    printf("First word = %s, Last word = %s\n", first, last);
    return 0;
}
void findMinMaxStr(char word[][40], char *first, char *last, int size)
{
    int i;
    char min[40], max[40];
    strcpy(min, word[0]);
    strcpy(max, word[0]);
    for (i = 0; i < size; i++)
    {
        if (strcmp(min, word[i]) > 0)
            strcpy(min, word[i]);
        if (strcmp(max, word[i]) < 0)
            strcpy(max, word[i]);
    }
    strcpy(first, min);
    strcpy(last, max);
}