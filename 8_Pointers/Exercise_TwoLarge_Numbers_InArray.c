#include <stdio.h>
#include <stdlib.h>

void two_large_num(int array[], int arraySize, int* largest, int* second_largest);
int main()
{
    int array[10];
    printf("Enter 10 numbers:\n");
    for(int i = 0; i<10; i++)
    {
        scanf("%d",&array[i]);
    }

    int largest;
    int second_largest;

    two_large_num(array, 10 , &largest, &second_largest);
    printf("First Largest: %d, Second Largest: %d\n",largest,second_largest );
    return 0;
}

void two_large_num(int array[], int arraySize, int* largest, int* second_largest)
{
    if(array[0] > array[1])
    {
        *largest = array[0];
        *second_largest = array[1];
    }
    else 
    {
        *largest = array[1];
        *second_largest = array[0];
    }

    for(int i = 2; i < arraySize; i++)
    {
        if (array[i] >*largest)
        {
            *second_largest = *largest;
            *largest = array[i];
            

        }
        else if(array[i] > *second_largest)
        {
            *second_largest = array[i];
        }
    }

}
