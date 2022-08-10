#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char grade;
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("Your age is %d! \n", age);

    float gpa;
    printf("Enter your GPA: \n");
    scanf("%f", &gpa);
    printf("Your GPA is %.2f \n", gpa);

 
    printf("Enter your grade: \n");
    scanf(" %c", &grade);
    printf("Your grade is %c \n", grade);

    return 0;
}