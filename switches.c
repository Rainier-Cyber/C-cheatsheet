// Include external libraries
#include <stdio.h>
#include <stdlib.h>

// Program execution starts here
int main(int argc, char **argv){
	int x = 1;
	
	// Switches can be used on *discrete* values
	switch ( x ) {
		case 1: printf("I'm first!\n");  // No break here is a logic error (fall-through error)
		case 2: printf("Wait, how did we get here?\n"); break; // Breaks prevent fall-through error
		case 3: {
			printf("Can't reach me!"); 
			break;
		}  // Line this } up according to your org's style guide
		default: printf("I'm society's last chance.");  // Default case is the final "else"
	} // Ain't no semicolon on me
	
	return 0;  // Return 0 to indicate successful execution;
}