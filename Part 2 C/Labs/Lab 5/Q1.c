#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct
{
    char name[20]; // a string
    int telno;     // an integer with 5 digits
} PhoneBk;
void printPB(PhoneBk *pb, int size);
int readin(PhoneBk *pb);
void search(PhoneBk *pb, int size, char *target);
int main()
{
    PhoneBk s[MAX];
    char t[20], *p;
    int size = 0, choice;
    char dummychar;
    printf("Select one of the following options: \n");
    printf("1: readin()\n");
    printf("2: search()\n");
    printf("3: printPB()\n");
    printf("4: exit()\n");
    do
    {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%c", &dummychar);
            size = readin(s);
            break;
        case 2:
            scanf("%c", &dummychar);
            printf("Enter search name: \n");
            fgets(t, 20, stdin);
            if (p == strchr(t, '\n'))
                *p = '\0';
            t[strlen(t) - 1] = '\0';
            search(s, size, t);
            break;
        case 3:
            printPB(s, size);
            break;
        }
    } while (choice < 4);
    return 0;
}
void printPB(PhoneBk *pb, int size)
{
    printf("The phonebook list:\n");
    if (size == 0)
        printf("Empty phonebook\n");
    else
    {
        int j;
        for (j = 0; j < size; j++)
        {
            printf("Name: %s\n", pb[j].name);
            printf("Telno: %d\n", pb[j].telno);
        }
    }
}
int readin(PhoneBk *pb)
{
    int i = 0;
    char *p, dummychar;
    while (1)
    {
        printf("Enter name:\n");
        fgets(pb[i].name, 20, stdin);
        if (p = strchr(pb[i].name, '\n'))
            *p = '\0';
        //pb[i].name[strlen(pb[i].name) - 1] = '\0';
        if (strcmp(pb[i].name, "#") == 0)
            break;
        printf("Enter tel:\n");
        scanf("%d", &pb[i].telno);
        scanf("%c", &dummychar);
        i++;
    }
    return i;
}
void search(PhoneBk *pb, int size, char *target)
{
    int k;
    for (k = 0; k < size; k++)
    {
        if (strcmp(pb[k].name, target) == 0)
        {
            printf("Name = %s, Tel = %d\n", pb[k].name, pb[k].telno);
            break;
        }
    }
    printf("Name not found!\n");
}