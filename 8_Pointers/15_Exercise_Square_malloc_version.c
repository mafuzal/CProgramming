#include <stdio.h>
#include <stdlib.h>

void square(int *x);

int main()
{
    /*
    *If we don't want to use an existing number, we need to allocate 
    *memory for it. 
    */
   //Allocate memory dynamically 
    int *num = (int *)malloc(sizeof(int)); //cast malloc because malloc comes out with void pointer 
    *num = 4;
    square(num);
    printf("The square of the given number is %d\n", *num);
    return 0;
}

void square(int *x) //Don't want to change the address 
{
    *x = (*x) * (*x);
}