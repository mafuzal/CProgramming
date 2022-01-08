#include <stdio.h>
#include <stdlib.h>

void constFunc(int *a, const int *b, const int *c, const int *d)
{
    *a = *b + *c + *d;
}

int main()
{
    int a = 0;
    int b = 1;
    int c = 2;
    int d = 3;
    printf("a:%d \n", a);
    constFunc(&a, &b, &c, &d);
    printf("a:%d \n", a);
    return 0;
}