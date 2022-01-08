#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);
int main()
{
    /* local variable declaration */
    int a = 100;
    int b = 200;

    printf("Before swap, value of a : %d \n", a);
    printf("Before swap, value of b : %d \n", b);

    /*Calling a function to swap the values */
    swap(&a, &b);

    printf("After swap, value of a : %d\n", a);
    printf("After swap, value of b : %d\n", b);
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x; /*Save the value at address x*/
    *x = *y;   /*Put y into x*/
    *y = temp; /*Put temp into y*/
    return;
}