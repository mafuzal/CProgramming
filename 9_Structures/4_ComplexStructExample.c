//Pointers Structures 
#include <stdlib.h>
#include <stdio.h>

typedef struct Triangle
{
    int *xCone;
    int *yCone;
    int *zCone;
} Triangle;

Triangle *allocateTriangleCoordinates(const int sizeT);
void printTriangleInfo(Triangle *aTriangle, const int sizeT);
void modifyTriangleInfo(Triangle *aTriangle, const int sizeT);


int main()
{

    Triangle *genericTriangle = allocateTriangleCoordinates(5);
    int xArray[5] = {2, 3, 4, 5, 6};
    int yArray[5] = {12, 36, 40, 52, 23};
    int zArray[5] = {21, 86, 63, 12, 93};

    genericTriangle->xCone = xArray;
    genericTriangle->yCone = yArray;
    genericTriangle->zCone = zArray;

    printTriangleInfo(genericTriangle, 5);
    modifyTriangleInfo(genericTriangle, 5);
    printTriangleInfo(genericTriangle, 5);
    free(genericTriangle->xCone);
    free(genericTriangle->yCone);
    free(genericTriangle->zCone);
    return 0;
}

Triangle *allocateTriangleCoordinates(const int sizeT)
{
    Triangle *allocateTriangleCoordinates;
    allocateTriangleCoordinates = malloc(sizeof(Triangle));
    allocateTriangleCoordinates->xCone = malloc(sizeT * sizeof(int));
    allocateTriangleCoordinates->yCone = malloc(sizeT * sizeof(int));
    allocateTriangleCoordinates->zCone = malloc(sizeT * sizeof(int));
    return allocateTriangleCoordinates;
}

void printTriangleInfo(Triangle *aTriangle, const int sizeT)
{
    for (int i = 0; i < sizeT; i++)
    {
        printf("%i %i %i\n", aTriangle->xCone[i], aTriangle->yCone[i], aTriangle->zCone[i]);
    }
}

void modifyTriangleInfo(Triangle *aTriangle, const int sizeT)
{
    for (int i = 0; i < sizeT; i++)
    {
        (aTriangle->xCone)[i] = aTriangle->xCone[i] * 20;
        (aTriangle->yCone)[i] = aTriangle->yCone[i] * 32;
        (aTriangle->zCone)[i] = aTriangle->zCone[i] * 25;
    }
}