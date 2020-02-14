// Include external libraries
#include <stdio.h>
#include <stdlib.h>

// Program execution starts here
int main(int argc, char **argv){
	int x = 4, y = 5; 
	
	// Single line if statement
	printf("Single line if statement -- ");
	if ( x % 2 == 0 ) printf("EVEN\n");  // Execute this statement if (x%2 == 0)
	
	// Single line if-else statement
	// Exec stmt if true, stmt_2 if false, note the presence of semicolons
	printf("Single line if-else statement -- ");
	if ( y % 2 == 0 ) printf("EVEN\n"); else printf("ODD\n");

	// An alternative single line if-else statement, 
	//   note the *lack* of semicolons on these statements.
	printf("Single line if statement ()?: -- ");
	( x % 2 == 0 ) ? printf("EVEN\n") : printf("ODD\n");

	// Multi-line if statement
	if ( y % 2 != 0 ) {  // Execute code block if true
	   printf("Y = %d is ODD.\n", y);
	   printf("Now y is even! Y = %d.\n", y = y + 1);
	   printf("Y's assignment persists, even from within printf! Y = %d.\n", y);
	}  // No semicolon here

	// If-else block demonstrating single line and multi-line statements
	y = (y - 3) * 5;
	// If y is even, add 1 to it (make it odd)
	//   Single line if to start
	if ( y % 2 == 0 ) printf("What's with this even y?\n", y = y-1 ); 
	// Continue with a single line if-else
	else if ( y % 3 == 0 ) printf("Y is odd and divisible by 3!\n"); 
	// A multi-line if-else!
	else if ( y % 5 == 0 ) {
		// You won't get here if an earlier condition is satisfied
		//   EVEN IF this block would be true
		printf("Y is odd and divisible by 5!\n");
		y = y * 2;  // Not anymore, bitch
	}  // Ain't no semicolon on me
	// A final else statement, if nothing above is true (default case)
	else printf("I'm so tired...\n");  // Can also be on the line above
	
	return 0;  // Return 0 to indicate successful execution;
}