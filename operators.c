// Include external libraries
#include <stdio.h>
#include <stdlib.h>

// Program execution starts here
int main(int argc, char **argv){
	int x = 4; 
	// x = x << 2; 
	printf("x << 2 equals 4 x 2 x 2 or %d.\n", x << 2);
	
	printf("x is %s.\n", ( x%2 == 0 ) ? "Even" : "Odd" ) ;
	
	int a = 1, b = 2, c = 3; 
	printf("A = %d. B = %d. C = %d.\n", a, b, c);
	
	return 0;  // Return 0 to indicate successful execution;
}