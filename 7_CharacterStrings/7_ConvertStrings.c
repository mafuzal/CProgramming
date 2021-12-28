#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    double value = 0;
    char str[] = " 3.5 2.5 1.26 This is part of the string"; //The string to be converted.
    char* pstr = str; //Pointer to the string to be converted 
    char* ptr = NULL; //Pointer to character position after conversion 

    while(true)
    {
        value = strtod(pstr, &ptr);  //Convert starting at pstr to double 
        if(pstr == ptr)
        {
            break;
        }
        else
        {
            printf("%2.2f \n", value);
            pstr = ptr;
        }
    }
    
    printf("String part is |%s|", ptr);
    return 0;
}