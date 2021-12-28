#include <stdio.h>
#include <string.h>
int main()
{
    char buff[100];    //Input buffer 
    int nLetters = 0;  // Number of letters in input 
    int nDigits = 0;  //Number of digits in input 
    int nPunct = 0;   // Number of punctuation characters 

    printf("Enter an interesting string of less than %d characters .\n",100);
    scanf("%s",buff); //Read a string into a buffer 

    int i = 0; //Buffer index 
    while(buff[i])
    {
        if(isalpha(buff[i]))
            nLetters++;
        else if(isdigit(buff[i]))
            nDigits++;
        else if(ispunct(buff[i]))
            nPunct++;
        i++;
    }

    printf("Your string contained %d letters, %d digits and %d punctation characters.\n",nLetters,nDigits,nPunct);
    return 0; 
}