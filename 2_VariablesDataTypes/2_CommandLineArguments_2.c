#include <stdio.h>
int main( int argc, char *argv[] ) 
{
	int i;
	printf( "argc:     %d\n", argc );
	printf( "argv[0]:  %s\n", argv[0] );
	if ( argc == 1 ) 
	{
		printf( "No arguments were passed.\n" );
	} 
	else 
	{
		printf( "Arguments:\n" );
		for ( i = 1; i < argc; ++i ) 
		{
			printf( "  %d. %s\n", i, argv[i] );
		}
	}
	return 0;
}

/**
 * @brief Ways to excute on command line 
    $ gcc 2_CommandLineArguments_2.c -o a
    $ ./a Jan Feb Mar Apr May Jun Jul Aug Sept Oct Nov Dec
 */