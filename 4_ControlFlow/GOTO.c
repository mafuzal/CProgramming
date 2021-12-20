#include<stdio.h>
int main()
{
    int x = 10;
    label:
        printf("Hello, World!\n");
        if(x == 10)
        {
            x++; // This counter was used to cancel the infinite looping
            goto label;
        }
        printf("Out of the Goto loop!\n");    
    return 0;
}