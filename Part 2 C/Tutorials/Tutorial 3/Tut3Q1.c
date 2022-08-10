#include <stdio.h>
void add1(int ar[], int size);
int main()
{
    int array[3][4];
    int h, k;
    for (h = 0; h < 3; h++)
        for (k = 0; k < 4; k++)
            scanf("%d", &array[h][k]);
    add1(array[0], 3 * 4); //It performs the same as below code
/*  for(h=0; h<3; h++)
        add1(array[h], 4) */
    for (h = 0; h < 3; h++)
    {
        for (k = 0; k < 4; k++)
            printf("%10d", array[h][k]);
        putchar('\n');
    }
    return 0;
}
void add1(int ar[], int size)
{
    int k;
    for (k = 0; k < size; k++)
        ar[k]++;
}

/* 
The function add1() has two parameters. The first one is an array address and the second one is the size of the array.
So the function adds 1 to every element of the one dimensional array. When the function is called in the for statement at line a by

    add1(array[h], 4);
    
array[h] is an one dimensional array of 4 integers. It is the (h+1)th row of the two dimensional array 'array'. In fact, array[h] is
the address of the first element of the (h+1)th row. So every function call works on one row of the two dimensional array.

    add1(array[0], 3 * 4);

This function works the same because C does not limit to the boundaries, which means that the function will just read for 12 elements.

For C when inputting an array as parameter, you just need to input the address of the first element in the array rather than calling the
entire array.
     */