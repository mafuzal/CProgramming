#include <stdio.h>
enum Color{
    RED,
    BLUE
};
enum Color2{
    YELLOW = 7,
    MAGENTA = 8,
    GREEN
};
int main(){
    enum Color c = RED;
    printf("%d\n",c);

    enum Color2 c2 = GREEN;
    printf("%d\n",c2);
    return 0;
}