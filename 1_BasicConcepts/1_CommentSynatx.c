/*
 * Multi-Line Commenting Style 
 */
#include <stdio.h>
int main()
{
	printf("The Earth is beautiful.\n");
	//Single-line comments 
	
	char str[100];
	int i;
	double x;
	
	printf("Enter a value : ");
	scanf("%d %s %lf", &i, str, &x);
	printf("\n You entered: %d::::%s:::%lf\n",i,str,x);
	
	
	return 0;
}