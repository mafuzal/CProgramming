#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 150;
    int *pNum = NULL;
    pNum = &num;

    printf("num address is: %p \n", &num);
    //Pointer can have three values:
    // It's address
    // Value of the pointer which is another address 
    // And then the value to which the pointer is pointing to. 
    printf("Address of pNum: %p \n",&pNum); //Ampersand will give the address of the pointer varibale 
    printf("Value of pNum: %p \n", pNum); //Pointer varaible just by itself will give the address of what it is pointing 
    printf("Value of what pNum is pointing to: %d \n", *pNum);// And then the value to which the pointer is pointing to.  

    return 0; 
}