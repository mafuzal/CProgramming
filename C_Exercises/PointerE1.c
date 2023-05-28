#include <stdio.h>
int main()
{
    int num = 10;
    int *pNum;

    pNum = &num;
    printf("The value of num is: %d\n", num);
    printf("The value of pNum is: %p\n", pNum);
    printf("The value pointed to by pNum is: %d\n",*pNum);

    int xVal[5] = {1, 10, 25, 95, 32};
    int *pNumbers;

    pNumbers = xVal;

    for (int i = 0; i < 5; i++)
    {
        printf("The %d-th element of the array is: %d\n",i,*(pNumbers + i));        
    }

    return 0;
}