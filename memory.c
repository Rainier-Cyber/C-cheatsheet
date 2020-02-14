// Include external libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Program execution starts here
int main(int argc, char **argv){
	// Allocate memory for a variable.
	float *x; x = malloc( sizeof( float ) );
	
	// Allocate memory for an array of length for type
	int length = 15;
	char *y; y = malloc( sizeof( char ) * length );  // This is one way to create a string
	
	strncpy(y, "0123456789ABCD", 15);
	printf("%s\n", y);
	
	// Re allocate the memory assigned to y
	length = 20;
	y = realloc(y, length); //  Make the string longer, returns an address
	strncpy(y, "0123456789ABCDEFGHI", 20);
	printf("%s\n", y);
	
	free(y);  // Returns void
	printf("%s\n", y);
	
	return 0;  // Return 0 to indicate successful execution;
}
