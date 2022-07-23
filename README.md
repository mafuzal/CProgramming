# C Programming

## Contents:  
1.0  Basics  
2.0 

## 1.0 Basics 
## 1.1 Commenting, `printf`, `scanf`, syntax in C 
```C
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
	double x;
	
	printf("Enter a value : ");
	scanf("%d %s %lf", &i, str, &x);
	printf("\n You entered: %d::::%s:::%lf\n",i,str,x);
	
	return 0;
}
```
