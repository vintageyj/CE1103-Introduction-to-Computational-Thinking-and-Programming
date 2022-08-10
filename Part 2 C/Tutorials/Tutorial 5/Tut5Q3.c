#include <stdio.h>

typedef struct
{
    int id;         /* staff identifier */
    int totalLeave; /* the total number of days of leave allowed */
    int leaveTaken; /* the number of days of leave taken so far */
} leaveRecord;
void getInput(leaveRecord list[], int *n);
int mayTakeLeave(leaveRecord list[], int id, int leave, int n);
void printList(leaveRecord list[], int n);

int main()
{
    int n = 0;
    leaveRecord staff[20];
    while (n != -1)
    {
        int sel, leave_id, leave_days;
        ;
        printf("\nChoose your options below:\n(1) getInput\n(2) mayTakeLeave\n(3) printList\nEnter your choice: ");
        scanf("%d", &sel);
        switch (sel)
        {
        case 1:
            getInput(staff, &n);
            break;
        case 2:
            printf("Enter applying staff's ID:\n");
            scanf("%d", &leave_id);
            printf("Enter number of days applied:\n");
            scanf("%d", &leave_days);
            switch (mayTakeLeave(staff, leave_id, leave_days, n))
            {
            case 1:
                printf("Application approved!\n");
                break;
            case 0:
                printf("Application is rejected, not enough leaves.\n");
                break;
            case -1:
                printf("Staff is not in the list.\n");
                break;
            }
            break;
        case 3:
            printList(staff, n);
            break;
        default:
            n = -1;
        }
    }
    return 0;
}
void getInput(leaveRecord list[], int *n)
{
    printf("Enter staff's ID:\n");
    scanf("%d", &list[*n].id);
    printf("Enter staff's total number of days of leaves:\n");
    scanf("%d", &list[*n].totalLeave);
    printf("Enter staff's number of days of leave already taken:\n");
    scanf("%d", &list[*n].leaveTaken);
    *n += 1;
}
int mayTakeLeave(leaveRecord list[], int id, int leave, int n)
{
    int i, staff_in_list = 0;
    for (i = 0; i < n; i++)
    {
        if (list[i].id == id)
        {
            staff_in_list = 1;
            if ((leave + list[i].leaveTaken) <= list[i].totalLeave)
                return 1;
            else
                return 0;
            break;
        }
    }
    if (staff_in_list == 0)
        return -1;
}
void printList(leaveRecord list[], int n)
{
    if (n)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            printf("%2d) ID: %2d | Total Leave: %2d | Leave Taken: %2d\n", j, list[j].id, list[j].totalLeave, list[j].leaveTaken);
        }
    }
    else
        printf("The list is empty.\n");
}