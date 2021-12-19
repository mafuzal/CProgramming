#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 25;
    int b = 28;
    printf("Addition Result: %d \n", a + b);
    printf("Modulus Result: %d \n", a % b);
    printf("Post-Increment Operator on a: %d \n",a++);
    printf("Pre-Increment Operator on b: %d \n",++b);

    bool result;
    bool x = true;
    bool y = true;
    result = x && y ;
    printf("%d \n",result);

     x = 1;
     y = 0;
    result = x && y ;
    printf("%d \n",result);

    result = x || y ;
    printf("%d \n",result);

     x = 0;
     y = 0;
    result = x && y ;
    printf("%d \n",result);

    result = !x ;
    printf("%d \n",result);
    return 0;

}