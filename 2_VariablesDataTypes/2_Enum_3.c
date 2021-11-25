#include <stdio.h>
enum Color{
    RED,
    YELLOW
};

typedef enum Color Color; 

int main(){
    Color c = RED;
    printf("%d\n",c);
    return 0;
}