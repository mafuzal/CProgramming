#include <stdio.h>

void multiplyTwoNumbers(int x, int y)
{
    printf("%d * %d: %d \n",x,y,x*y);
}

int returnMultiplyTwoNumbers(int x, int y)
{
    return x*y;
}

int main()
{
    multiplyTwoNumbers(10,20);
    multiplyTwoNumbers(20,30);
    multiplyTwoNumbers(15,15);
    printf(" Returned Result:%d \n",returnMultiplyTwoNumbers(25,25));

    return 0;
}