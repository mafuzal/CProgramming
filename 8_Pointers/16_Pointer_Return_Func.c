#include <stdio.h>

int* returnPointerFunc();

int main()
{
    int* x;
    x = returnPointerFunc();
    printf("Value: %d and address:%p",*x,x);
    return 0;
}

int* returnPointerFunc()
{
    //Compiler makes a stack for a function call.
    //As function exits, function stack also gets removed 
    //which causes local variables to go out of scope.
    //Static variables have aproperty of preserving 
    //their value even after they are out of scope.
    //So to excute the concept of returning a pointer from function in C, 
    // define the local varibles as a static varibale.
    static int y = 100; 
    return (&y);
}
