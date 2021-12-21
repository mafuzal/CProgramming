#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    printf("This program will print first 100 prime numbers.\n");
    int primes[50] = {0};
    primes[0] = 2;
    primes[1] = 3;
    int primeArrayCounter = 2;
    bool isPrime;
    for(int i = 5; i <= 100 ; i=i+2 )
    {
        isPrime = 1;
        for (int j =2; j<i;j++)
        {
            
            if (i % j == 0)
            {
                isPrime = 0; 
            } 
        }
        if(isPrime)
        {
            primes[primeArrayCounter] = i;
            primeArrayCounter++;
        }  
    }
    for (int i =0; i<primeArrayCounter;i++)
    {
        printf("<%d> ",primes[i]);
    }

    return 0;
}