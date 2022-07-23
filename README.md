# C Programming

## Contents:  
1.0  Basics  
2.0 
## Compiling C in Linux 
```
gcc file.c 
./a.out
```
## 1.0 Basics 
## 1.1 Commenting, `printf`, `scanf`, syntax in C 
```c
/*
 * Multi-Line Commenting Style 
 */
#include <stdio.h>
int main()
{
	printf("Hello World.\n");
	//Single-line comments 
	
	char str[100];
	int i;
	
	printf("Enter a Dollar Cost Value X ending with $ : ");
	scanf("%d %s", &i, str);
	printf("You entered: %d %s\n",i,str);
	
	return 0;
}
```
<p align="center">Listing 1: Basics in C</p>
