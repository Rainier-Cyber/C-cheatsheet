// Include external libraries
#include <stdio.h>
#include <stdlib.h>

// Program execution starts here
int main(int argc, char **argv){
	
	float my_float = 1.618;  // Declare a variable of type
	
	int int_array[5] = {0, 1, 2, 3, 4};  // type array of size n
	// This will print the address of int_array instead...
	printf("An integer array cannot be printed like an int! %d. \n", int_array);
	
	char name[6] = "string";  // Declare a string of size 6
	printf("But %ss aren't a true data type. They are arrays of characters.\n", name);

	int a[10];  // An array of 10 ints
	int i = a[6];  // i is set to the 6th element of a
	printf("a[6] is %d and i is %d.\n", a[6], i);
	
	// The address of a is the same as the address of a[0]
	int *p = a;  // Pointer to address of a, same as &a[0]
	printf("\nA pointer to an array's address is the same \
as a pointer to it's first element.\n"); // Use \ to break to a new line in a statement
	
	printf("p = %d.\n&a[0] = %d.\na = %d.\n", p, &a[0], a);
	
	return 0;  // Return 0 to indicate successful execution;
}