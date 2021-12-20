#include <stdio.h>
int main()
{
    unsigned long long sum = 0LL; //Stores the sum of the integers 
    unsigned int count = 0; //The number of integers to be summed

    //Read the number of integers to be summed 
    printf("\n Enter the number of integers you want to sum: ");
    scanf(" %u", &count);

    //Sum integers from 1 to count 
    for(unsigned int i = 1; i <= count; i++)
    {
       printf("Iteration:%u \n",i);
       sum += i;
    }

    printf("\nTotal of the first %u numbers is %llu\n", count, sum);
    return 0;
}