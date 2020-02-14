// Include external libraries
#include <stdio.h>
#include <stdlib.h>

// Declare functions here for later use
int fxn(int a){
	return a;
}

// Program execution starts here
int main(int argc, char **argv){
	int b = fxn(13);  // Use the declared functions
	printf("Example program structure.\nB is %d.\n", b);
	
	return 0;  // Return 0 to indicate successful execution;
}