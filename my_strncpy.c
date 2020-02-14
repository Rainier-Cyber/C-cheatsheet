/* my_strncpy.c
Demonstrate a reimplementation of strncpy(d, s, n) in order to help
students and new developers understand its behavior.

Author: Sean Eyre, for Rainier Cyber
References: https://www.systutorials.com/docs/linux/man/3p-strcpy/ 

*/
#include <stdlib.h>
#include <stdio.h>
// USING STRING.H WOULD DEFEAT THE PURPOSE OF THIS EXERCISE


char *str_n_copy( const char *src, char *dest, int n){
	/*Function to copy up to n characters from string src to string dest
	
	Args:
	const char *src -- pointer to the source string
	char *dest      -- pointer to the destination string
	int n           -- int to specify the number of characters to
	                   copy INCLUDING THE NULL TERMINATOR; In other
					   words, n should be the same as the length of
					   the array creating dest
	*/
	int i;
	for ( i = 0; i < n-1 && src[i] != '\0'; i++) dest[i] = src[i];
	for ( ; i < n; i++) dest[i] = '\0';

   return dest;
}

int main( int argc, char **argv) {

   char a[] = "Test this bitch";
   char b[5];
   str_n_copy( a, b, 5 );
   printf("a = %s and b = %s.\n", a, b);

   return 0;  // Proper exit code if successful 

}
