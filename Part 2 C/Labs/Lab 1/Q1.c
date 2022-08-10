#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentID, mark;
    printf("Enter Student ID: \n");
    scanf("%d", &studentID);
    while (studentID != -1)
    {
        printf("Enter Student's Mark: \n");
        scanf("%d", &mark);
        switch(mark)
        {
            case 75 ... 100:
                printf("Grade = A\n");
                break;
            case 65 ... 74:
                printf("Grade = B\n");
                break;
            case 55 ... 64:
                printf("Grade = C\n");
                break;
            case 45 ... 54:
                printf("Grade = D\n");
                break;
            case 0 ... 44:
                printf("Grade = F\n");
                break;
        }
        printf("Enter Student ID: \n");
        scanf("%d", &studentID);
    }
    return 0;
}
