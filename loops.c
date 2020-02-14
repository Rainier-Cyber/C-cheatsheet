// Include external libraries
#include <stdio.h>
#include <stdlib.h>

// Program execution starts here
int main(int argc, char **argv){
	int i = 0;
	
	// Single line while loops, note the output 0-4
	printf("Loop 1: Single line while with i++:\n");
	while ( i < 5 ) printf("i = %d.\n", i++);  // print then execute i = i + 1
	
	// Pay attention to how this changes the output to 1-5
	i = 0;
	printf("\nLoop 2, Single line while with i += 1:\n");
	while ( i < 5 ) printf("i = %d.\n", i += 1);  // Execute i = i + 1 then print
	
	i = 0;
	printf("\nLoop 3, multi-line while:\n");
	printf("Code blocks {} let us explicitly control execution.\n");
	while (i < 5 ) {
		printf("i = %d.\n", i);
		i++;  // We be the last thing to execute each step, unlike Loop 1
	}  // No semicolon
	
	// Notice we don't reset i
	printf("\nLoop 4, do-while:\n");
	do {  // This will be a { EVEN IF ON A SINGLE LINE
		printf("i = %d.\n", i += 1); 
	} while (i < 5); // should execute once, since i is already < 5
	// At the end of this loop, i is 6
	
	printf("\ni currently is %d. This is important for the following examples.\n", i);
	
	/* For loops always have initialization, conditions, and steps.
	Like functions, for loops have their own namespace/memoryspace. 
	However, they can also inherit memory from the calling memory-
	space. 
	
	Below, we instantiate a new int, i. It exists within the for loop's 
	memory space EVEN THOUGH IT HAS THE SAME NAME AS THE SURROUNDING
	MEMORY SPACE'S i. This concept is called overloading. 
	
	The i which exists within the for loop's memory space is can no
	longer be referenced after the loops termination.
	*/
	printf("\nLoop 5, for loop:\n");
	for ( int i = 0; i < 5; i++){
		printf("i = %d.\n", i);
	}  // No semicolon
	
	printf("\nHOW DID i GET BACK TO %d!?\n", i);
	// In fact, main()'s version of i never changed.
	
	/* You can leave out the init or step if they established elsewhere.
	The do-while loop left i = 6, this one will count down to 1 
	and leave i = 0.
	
	Because we aren't *instantiating* i in the loop below, it will look
	for a variable labeled "i" in the calling memoryspace. 
	*/
	printf("\nLoop 6, for loop using existing instantiation and initialization of i:\n");
	for ( ; i > 0; i--){
		printf("i = %d.\n", i);
	}
	
	printf("i currently is %d.\n", i);
	
	/* Finally, we can re-*initialize* i within the loop while still impacting
	the calling memory space.
	
	We will also define the step inside the loop this time
	*/
	printf("\nLoop 7, for loop using internal defined step:\n");
	for ( i = 10; i > 0; ){
		printf("i = %d.\n", i);
		i = i / 2;  // Integer division will truncate decimals
	}
	
	printf("Finally, i ends the program at %d.\n", i);
	
	return 0;  // Return 0 to indicate successful execution;
}