#include <stdio.h>
enum Color{
    RED,
    BLUE
};

enum Color2{
    RED = 7,
    BLUE = 8,
    GREEN
};


int main(){
    enum Color c = RED;
    printf("%d\n",c);

    enum Color2 c2 = RED;
    printf("%d\n",c2);
    return 0;
}