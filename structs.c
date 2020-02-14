// Include external libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Program execution starts here
int main(int argc, char **argv){
	// Create a new structure called name with fields x, y
	struct struct_1{ int x; int y; };

	/* Define struct name and initialize var_name at the same time */
	struct struct_2{ int x; int y; } var_1;

	// Initialize var_2 as struct that was previously defined
	struct struct_1 var_2 = {2, 3};
	printf("(%d, %d)\n", var_2.x, var_2.y);  // Reference fields in var_2
	var_2.y = 5;  // Assign to field y directly
	printf("(%d, %d)\n", var_2.x, var_2.y);

	// Declare bit field x with members a, b each four bits.
	struct{char a:4; char b:4;} x;

	// create struct and instantiate s
	struct { int n; double root;} s; 
	/* Initialize s.n as 16 then initialize s.root as sqrt(16) */
	s.root = sqrt((s.n = 16));  
	printf("( %d, %f )\n", s.n, s.root);
	
	return 0;  // Return 0 to indicate successful execution;
}
