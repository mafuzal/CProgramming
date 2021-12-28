#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayReverseOrder(char str1[]);
void stringBubbleSort(char stringArray[25][50], int len);

int main()
{
    char str1[100];

    printf("Enter a string: ");
    scanf("%s",str1);
    displayReverseOrder(str1);

    int noOfStrings = 0;
    char stringArray[25][50];
    printf("Input number of strings: ");
    scanf("%d", &noOfStrings);

    for (int i = 0; i <= noOfStrings; i++)
    {
        scanf("%s", stringArray[i]);
    }
    stringBubbleSort(stringArray, noOfStrings);


    return 0;

}

void displayReverseOrder(char str1[])
{
    int len = strlen(str1);

    for(int i = len-1; i>= 0; i--)
    {
        printf("%c",str1[i]);

    } 

}
//Need to fix this later 
void stringBubbleSort(char stringArray[25][50], int len)
{
    char temp[50];
    for(int i = 0; i< len; i++)
    {
        for(int j = 0; j < len-1; j++)
        {
            if(strcmp(stringArray[j], stringArray[j+1]) >0)
            {
                strncpy(temp, stringArray[j], sizeof(temp) - 1);
                strncpy(stringArray[j], stringArray[j+1], sizeof(stringArray[j]) - 1);
                strncpy(stringArray[j+1],temp, sizeof(stringArray[j]+1) - 1);

            }
        }
    }

    for(int i = 0; i<= len; i++)
    {
        printf("%s\n",stringArray[i]);
    }
}