#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    int x;

    //Enter the numer of elements for the array
    printf("Enter number of elements:");
    scanf("%d", &x);
    printf(" %d number of elements entered.\n", x);

    p = (int *)malloc(x * sizeof(int));
    if (p == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memeory succesfully allocated.\n");
        for (int i = 0; i < x; i++)
        {
            p[i] = i + 1;
        }

        for (int i = 0; i < x; i++)
        {
            printf("%d....", p[i]);
        }
    }
}