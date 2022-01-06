//This program demonstrates the effect of adding an integer value to a pointer.
#include <stdio.h>
#include <string.h>

int main()
{
    char multiple[] = "a string";
    char *p = multiple;

    for (int i = 0; i < strlen(multiple); ++i)
    {
        printf("multiple[%d] = %c," //Just Printing the elements of multiple char by indexing the Char String Array 
               "* (p + %d) = %c,"   //Dereferncing the Pointer + i  
                "&multiple[%d] = %p," //Array address 
                "p+%d = %p\n",       //Address the p pointer is pointing to which is same as above 
               i, multiple[i],      //Just Printing the elements of multiple char by indexing the Char String Array
               i, *(p + i),         //Dereferncing the Pointer + i 
               i, &multiple[i],     //Array address
               i, p + i);           //Address the p pointer is pointing to which is same as above 
    }

    return 0;
}