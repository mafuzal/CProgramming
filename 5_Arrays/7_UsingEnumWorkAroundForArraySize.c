#include <stdio.h>
#include <stdlib.h>

typedef enum Planets
{
    Mercury = 1,
    Venus,
    Earth,
    Mars
} Planets;
void printOut(int variableArraySize);
int main()
{
    int arrayVariableSize = 3;
    Planets getArraySize = arrayVariableSize; 
    printOut(getArraySize);

    return 0;
}

void printOut(int variableArraySize)
{    
    printf("Number of Array Inputs: %d\n", variableArraySize);
    int xVarryingArray[variableArraySize];

    for (int i = 0; i < variableArraySize; i++)
    {
        xVarryingArray[i] = i * i * 10;
        printf("xVarryingArray[%d] = %d\n", i, xVarryingArray[i]);
    }
}
