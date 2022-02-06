#include <stdio.h>
#include <stdlib.h>

typedef struct A{
    int x;
    int y;
}A;

void printFunc1(A *a_1);
void printFunc2(A *a_2);
int main()
{
    A a_s = {
        .x = 20,
        .y = 50
    };

printFunc1(&a_s);

}
void printFunc1(A *a_1)
{
    printf("X:%d\n",a_1->x);
    printf("Y:%d\n",a_1->y);
    a_1->x = 100;
    printFunc2(a_1);
}
void printFunc2(A *a_2)
{
    printf("X:%d\n",a_2->x);
    a_2->y = (a_2->y)*3;
    printf("Y:%d\n",a_2->y);
}