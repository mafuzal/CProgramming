#include <stdio.h>
#include <stdbool.h>

int main(){
    int intVar1 = 10;
    int intVar2 = -100;
    unsigned int uintVar1 = 100;
    float floatVar1 = 9.81;
    float floatVar2 = 6.674e-11;
    double doubleVar = 9.81f;
    char charVar = 'A';
    bool boolVar = 0;
    printf("-----------------------------------------------------------------------\n");
    printf("------------------------Print Integer Specifiers-----------------------\n");
    printf("Signed int detects the base automatically (%%i): = %i,\n",intVar1);
    printf("Signed int decimal integer assumes base 10(%%d): = %d,\n",intVar1);
    printf("Signed int decimal integer printing negative value: = %d,\n",intVar2);
    printf("Unsigned int decimal integer assumes base 10(%%u): = %u,\n",uintVar1);
    printf("-----------------------------------------------------------------------\n");

    printf("-----------------------------------------------------------------------\n");
    printf("-------------------Print float and double Specifiers-------------------\n");
    printf("float specifier (%%f): = %f,\n",floatVar1);
    printf("float specifier (%%f): = %f,\n",floatVar2);
    printf("Signed int decimal integer printing negative value: = %f,\n",doubleVar);
    printf("-----------------------------------------------------------------------\n");

    printf("floatingVar = %f\n",floatVar1);
    printf("doubleVar = %e\n",doubleVar);
    printf("doubleVar = %g\n",doubleVar);
    printf("charVar =%c\n",charVar);
    printf("boolVar = %i\n",boolVar);

    return 0;
}