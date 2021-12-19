#include <stdio.h>
int main()
{
    unsigned int a = 60; //0011 1100
    unsigned int b = 13; //0000 1101 

    printf("AND Bitwise Result is %d \n", a & b); // 0000 1100
    printf("OR  Bitwise Result is %d \n", a | b); // 0011 1101
    printf("XOR Bitwise Result is %d \n", a ^ b); // 0011 1101
    printf("ONES Complement Bitwise Result is %d \n", ~a); // 0011 1101

    printf("Binary operators can also be used for shifting.\n");
    // integer is 32 bits = 4 Bytes: 0000 0000 0000 0000 0000 0000 0011 1100
    printf("Shift a :%d by 2 to left and Shifted Value of a: %d \n", a, a<<2); // 1111 0000
    printf("Shift a :%d by 4 to left and Shifted Value of a: %d \n", a, a<<4); 
    printf("Shift a :%d by 2 to right and Shifted Value of a: %d \n", a, a>>2); // 1111 0000
    printf("Shift a :%d by 4 to right and Shifted Value of a: %d \n", a, a>>4); 
    return 0;
}