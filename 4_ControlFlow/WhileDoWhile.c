#include <stdio.h>
int main()
{
    //Counter controlled While Loop 
    int count = 1;
    while(count <= 5)
    {
        printf("%d \n", count);
        count++;
    }

    //Logic controlled while loop
    int num =0;
    scanf("%d",&num);

    while(num != -1)
    {
        scanf("%d",&num);
    }

    //Do-While loop is post-test loop 

    int counter = 0;
    do
    {
        scanf("%d",&counter);
    } while (counter != 20);
    
    //Counter controlled do-while loop 
    int x = 4;
    do
    {
        printf("\n Number = %d \n",x);
        x++;
    } while (x < 4);
    

    return 0;
}