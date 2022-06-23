#include <stdio.h>
#include <stdlib.h>
void pointerFunc(int *x);
int main()
{
    int num = 150;
    int *pNum = NULL;
    pNum = &num;

    printf("num address types as [&num]: %p \n", &num);
    //Pointer can have three values:
    // It's address
    // Value of the pointer which is another address 
    // And then the value to which the pointer is pointing to. 
    printf("Address of pNum typed as [&pNum]: %p \n",&pNum); //Ampersand will give the address of the pointer varibale 
    printf("Value of pNum typed as [pNum]: %p \n", pNum); //Pointer varaible just by itself will give the address of what it is pointing 
    printf("Value of what pNum is pointing to typed as [*pNum]: %d \n", *pNum);// And then the value to which the pointer is pointing to.  
    pointerFunc(pNum);
    printf("Value of what pNum is pointing to typed as [*pNum] after changing value: %d \n", *pNum);// And then the value to which the pointer is pointing to.  
    printf("Now the Value of num at address types as [&num, num]: %p and Value = %d \n", &num,num);


    return 0; 
}

//Change the value here 
void pointerFunc(int *x)
{
    printf("Value of x:%d\n",*x);
    printf("\n");
    *x = *x / 10;
}