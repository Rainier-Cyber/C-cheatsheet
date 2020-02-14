// Include external libraries
#include <stdio.h>
#include <stdlib.h>

// Declare functions here
int multiply(int x, int y, int z){
	int a = x * y;
	int b = a * z;
	return b;  // Same type ret_type: int
}

int my_floor( float x ){
	return (int) x / 1;
}

void scream( char *s ){
	// Ignores your filthy parameters
	printf("I return nothing!\n");
}

int add_two(int n){
	int x = n + 2;
	return x;
}

// Create a new pointer to add_two(), can create aliases this way
// return_type (*new_pointer)(param types) = address_of_function;
int (*plus_two)(int) = add_two;

// I'm tired of making mistakes because of Python
int (*print)(const char * restrict, ...) = printf;

// Program execution starts here
int main(int argc, char **argv){
	
	printf("%d x %d x %d = %d.\n", 2, 3, 4, multiply(2,3,4));
	printf("The floor of %f is %d.\n", 15.6, my_floor(15.6));
	printf("%d x %d x %d + 2 = %d.\n", 2, 3, 4, add_two(multiply(2,3,4)));
	printf("The floor of %f is %d when you add two to it.\n", 15.6, plus_two(my_floor(15.6)));
	scream("Into the void.");
	print("I'm in danger!\n");
	return 0;  // Return 0 to indicate successful execution;
}
