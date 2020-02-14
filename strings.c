// Include external libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Note this new include

// COMPILING THIS EXAMPLE WILL PRODUCE WARNINGS AND ERRORS, READ BEFORE EXECUTING

// Program execution starts here
int main(int argc, char **argv){
	
	/* We'll make two strings of different lengths and line them up to show
	that they are different lengths. We can line them up because, technically,
	the amount of white space doesn't matter in C.
	
	Remember, when we declare the array for the string, we must include 1 extra
	space for the null terminator (\0), which indicates the end of a string. 
	
	If you don't include the \0, you will get unpredictable results.
	*/
	
	char   my_name[13]  = "John Pickles";    // 13 = len 12 + 1 for null terminator
	char your_name[15]  = "Sergeant Major";  // 15 = len 14 + 1 for null terminator
	
	// This is actually passing the addresses of the starting indexes of each string
	printf("My name is %s %s.\n", your_name, my_name);
	
	strcpy(your_name, my_name);  // strcpy(d, s): Copy s to d, does not check bounds
	/* Notice that we are passing addresses in again, effectively pointers.

	your_name is the destination, my_name is the source
	
	This will mutate the destination string IN PLACE, i.e. it DOES NOT RETURN.
	
	When it runs out of characters to copy, it drops the null terminator in place.
	*/
	printf("Your name is now %s.\n", your_name);
	
	/* Because strings are arrays, we have to use something like strcpy to reassign
	a string's value. The following works because your_name has enough space, even 
	with the null terminator being in position 13 (index 12).
	*/
	strcpy(your_name, "Sergeant Major");
	printf("Your name is now %s.\n", your_name);
	
	/* If we give it too many characters, it will create an overflow, which 
	could then be exploited. Your compiler MIGHT warn you about this. The
	program will still run.
	
	When the overflow occurs, it will re-size your array, possibly into allocated
	memory. It may work in your favor, it will most likely Darth Vader your plans.
	
	If it overflows into allocated memory, it will produce an error and cause
	a crash. If an attacker can do this AND control your stack or return pointers,
	they will effectively be able to inject code into your program.
	*/
	strcpy(your_name, "Command Sergeant Major");
	printf("Your name is now %s.\n", your_name);
	
	/* Instead, use strncopy, where you can specify the MAX length of the copy.
	If this hit the bounds, it will fail to copy the null terminator, which will
	cause the behavior of this to change each execution. 
	
	Run the program multiple times to observe the change. 
	*/
	// strncpy(d, s, n): Copy at most n char s to d, stop at bounds
	strncpy(my_name, "Jeremiah Bullfrog", 13);  // This is deliberately too short
	                            // Change ^ to 18 and compile and run again, 
								// watch the changes.
	printf("My name is now %s.\n", my_name);
	
	/* We can do the same thing with memcpy and memmove, moving bytes instead,
	each char moved is 1 BYTE.
	*/
	char   force[10]  = "The force";      // 10 = len 9 + 1 for null terminator
	char    dark[14]  = "The dark side";  // 14 = len 13 + 1 for null terminator
	
	/* This example should be long enough to demonstrate the problem.
	
	Your compiler probably won't warn you about this one.
	*/
	// memcpy(d, s, n)  // Copy n BYTES s to d, no bounds check, like strcpy()
	memcpy(force, "The light side of the force", 10);
										// Change ^ to 28 and run again
	printf("The force is now %s.\n", force);  // It MIGHT not Darth Vader you.
	
	/* Finally, memmove. It won't fail if it exceeds its boundaries, and will
	warn you at the compiler, but may not produce the results you want either.
	*/
	// memmove(d, s, n)  // Copy n BYTES, won’t fail if exceeds bounds
	memmove(dark, "a path to powers many consider to be unnatural", 14);
														  // Change ^ to 47 and run again
	printf("The dark side is now %s.\n", dark);

	return 0;  // Return 0 to indicate successful execution;
}