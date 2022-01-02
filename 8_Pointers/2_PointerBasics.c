#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0; //Variable type int initialized to 0
    int *pNumber = NULL; //A pointer that can point to type int 
    number = 10;
    printf("Number's address: %p \n", &number); //Output the address 
    printf("Number's value: %d \n\n", number); //Output the value 

    pNumber = &number; //Store the address of number in pNumber 
    printf("pNumber's address: %p \n", (void*)&pNumber); //Output the address 
    printf("pNumber's size:%zd bytes \n",sizeof(pNumber)); //Output the size 
    printf("pNumber's value: %p\n",pNumber); //Output the value (an address)
    printf("Value pointed to: %d \n",*pNumber); //Value at the address 

    return 0;

}