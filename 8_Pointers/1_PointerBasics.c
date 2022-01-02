#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 10; 
    int x;
    int *int_pointer; //Declare a pointer value as int_pointer
    int_pointer = &count; //initialize int_pointer
    x = *int_pointer; //Access the value stored in int_pointer to x 

    printf("count = %i, x = %i \n", count, x);
    return 0;
}