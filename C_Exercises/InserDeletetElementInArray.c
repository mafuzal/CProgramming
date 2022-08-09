/*
* C code to add and delete elements from an array.
*/
#include <stdio.h>
#define MAX_ARRAY_SIZE 100 

void main()
{
    // Vars 
    int arrayTest[MAX_ARRAY_SIZE];
    int arrayLength;
    int changePosition;
    int changePositionValue;
    int deletePosition;
    
    // Fill-up the array 
    printf("Enter the length of array to test.\n");
    scanf("%d",&arrayLength);

    printf("Fill up %d elements of array.\n", arrayLength);
    for (int i = 0; i < arrayLength; i++)
    {
        scanf("%d",&arrayTest[i]);
    }

    printf("The elements entered are:\n");
    for (int i = 0; i < arrayLength; i++)
    {
        printf("[%d] = [%d].\n", i, arrayTest[i]);
    }
    // Insert in a given position 
    printf("\n Enter position where to insert:\n");
    scanf("%d",&changePosition);

    printf("\n Enter position value: \n");
    scanf("%d",&changePositionValue);

    for (int i = arrayLength - 1; i >= changePosition - 1; i--)
    {
        arrayTest[i + 1] = arrayTest[i];
    }

    //Delete from a given position 
    arrayTest[changePosition -1] = changePositionValue;
    arrayLength++;

    printf("The elements entered are:\n");
    for (int i = 0; i < arrayLength; i++)
    {
        printf("[%d]  = [%d].\n", i, arrayTest[i]);
    } 

    printf("Enter the index to be deleted from array:\n");
    scanf("%d",&deletePosition);

    for ( int i = deletePosition - 1; i < arrayLength - 1; i++)
    {
        arrayTest[i] = arrayTest[i + 1];
    }
    arrayLength--;

    printf("The elements after modification:\n");
    for (int i = 0; i < arrayLength; i++)
    {
        printf("[%d]  = [%d].\n", i, arrayTest[i]);
    } 

}


