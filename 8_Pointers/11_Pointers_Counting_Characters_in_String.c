#include <stdio.h>
#include <stdlib.h>

int stringLength(const char* string);

int main()
{
    printf(" %d \n", stringLength("StringLength test"));
    printf(" %d \n", stringLength(""));
    printf(" %d \n", stringLength("User"));

    return 0;
}

int stringLength(const char* string)
{
    const char* lastAddress = string;
    while(*lastAddress)
        ++lastAddress;
    
    return lastAddress - string; 
}
