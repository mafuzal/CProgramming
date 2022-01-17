#include <stdio.h>
#include <stdlib.h>
#define N 10
void max_min(int Array[], int arraySize, int* max, int* min);
int main()
{
    int arrayInput[N];
    int max; 
    int min;

    printf("Enter %d numbers:\n",N);
    for (int i = 0; i< N; i++)
        scanf("%d",&arrayInput[i]);

    max_min(arrayInput, N, &max, &min);
    printf("Maximum Number: %d \n",max);
    printf("Minimum Number: %d \n",min);
    return 0;
}
void max_min(int Array[], int arraySize, int* max, int* min)
{
    *max = *min = Array[0];
    for(int i = 1; i < arraySize; i++)
    {
        if(Array[i] > *max)
            *max = Array[i];
        else if (Array[i] < *min)
            *min = Array[i];
    }

}
