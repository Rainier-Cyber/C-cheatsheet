// Include external libraries
#include <stdio.h>
#include <stdlib.h>

// Program execution starts here
int main(int argc, char **argv){
	float *name;  // Pointer name to type, in this case a float
	
	/*This is referred to as function prototyping, don't do it unless
	you are an experienced programmer. It can be done even if you
	aren't returning a pointer.
	
	Return a pointer if you are mutating a variable in place or are 
	receiving pointers as parameters
	*/
	char *fxn();  // Function returning a pointer to char
	
	
	void *generic;            // Generic pointer
	int *int_pointers[2];     // An array of 2 pointers to ints
	int (*ptr_to_array)[2];   // A pointer to an array of 2 of ints
	
	char bob = 'a';
	char *bob_address = &bob;  // address of object name; Bob's address
	printf("Bob is %c, his address is %d, and his pointer points to %d (%p).\n",
		bob, &bob, bob_address, bob_address);
	
	/* The pointer to bob's address needs to be of the same type as Bob,
	because if we increment the pointer, it will use the size of Bob's type
	to calculate the new address of the pointer.
	*/
	bob_address = bob_address + 1;  // new address is old address + sizeof(char)
	printf("Bob was at %d but now his pointer is at %d (%p).\n",
		&bob, bob_address, bob_address);
	printf("The comparison is %s.\n", 
		(bob_address == (&bob + sizeof(char))) ? "TRUE" : "FALSE");
	
	return 0;  // Return 0 to indicate successful execution;
}
