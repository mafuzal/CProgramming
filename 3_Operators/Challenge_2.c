//sizeof example 
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    printf("Varibales of type char occupy %u bytes.\n", sizeof(char));
    printf("Varibales of type short occupy %u bytes.\n", sizeof(short));
    printf("Varibales of type int occupy %u bytes.\n", sizeof(int));
    printf("Varibales of type long occupy %u bytes.\n", sizeof(long));
    printf("Varibales of type long long occupy %u bytes.\n", sizeof(long long));
    printf("Varibales of type float occupy %u bytes.\n", sizeof(float));
    printf("Varibales of type double occupy %u bytes.\n", sizeof(double));
    printf("Varibales of type long double occupy %u bytes.\n", sizeof(long double));

}