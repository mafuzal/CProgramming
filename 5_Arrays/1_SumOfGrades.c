#include <stdio.h>
int main()
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("Enter the 10 grades in Integer Form: \n");
    for(int i = 0; i < count; i++)
    {
        printf("%2u>",i+1);
        scanf("%d",&grades[i]);
        sum += grades[i];
    }

    average = (float) sum/count;

    printf("Average of ten grades entered is: %.2f\n",average);
    return 0;
}