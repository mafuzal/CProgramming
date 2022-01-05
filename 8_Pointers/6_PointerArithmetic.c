#include <stdio.h>
#include <stdlib.h>

int arraySum(int array[], const int n);


int main()
{
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
    printf("The sum is %i\n", arraySum(values,10));
}

int arraySum(int array[], const int n)
{
    int sum = 0;
    int *ptr;
    int *const arrayEnd = &array[0] + n;
    //OR
    //int *const arrayEnd = array + n;

    for(ptr = array; ptr < arrayEnd; ++ptr)
    {
        sum += *ptr;
    }

    return sum;
}