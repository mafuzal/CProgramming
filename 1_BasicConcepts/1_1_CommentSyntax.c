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