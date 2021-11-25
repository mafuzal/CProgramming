#include <stdio.h>
typedef enum Color{
    RED,
    YELLOW
}Color;

int main(){
    Color c = YELLOW;
    printf("%d\n",c);
    return 0;
}