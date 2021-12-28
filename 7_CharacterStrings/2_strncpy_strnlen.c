#include <stdio.h>
#include <string.h>
int main()
{
    char stringA[] = "This is a char array to represent string in C.";
    printf("The length is: %d \n",strlen(stringA));

    char temp[50];
    strncpy(temp, stringA, sizeof(stringA));
    printf("The string is: %s",temp);
    //Difference between sizeof and strlen in context of Strings
    printf("The length is: %d \n",sizeof(temp));
    printf("The length is: %d \n",strlen(temp));


    
    return 0;
}