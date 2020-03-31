/* my_strcpy.c
Demonstrate a reimplementation of strcpy(d, s) in order to help
students and new developers understand its behavior.

Author: Sean Eyre, for Rainier Cyber
References: https://www.techiedelight.com/implement-strcpy-function-c/ 

*/
#include <stdlib.h>
#include <stdio.h>
// NOTICE WE DON'T CHEAT BY USING STRING.H

char * str_copy( char *src, char *dest ){
   char *index = src;  // Create an index so that we don’t mutate src
   char *ptr = dest;  // Save the starting point of the destination

   while (*index != '\0' ) {
      *dest = *index;  // Set the memory at dest to the memory at index
      dest++;  // See above for pointer math
      index++;
   }
   *dest = '\0';
   return ptr;
}

int main( int argc, char **argv) {

   char a[5] = "Test";
   char b[5];
   str_copy( a, b );  // Note this is interpreted as the addresses
   printf("a = %s and b = %s.\n", a, b);
   
   // The following might produce a warning at compile time
   char c[] = "Test numero dos";
   printf("%s\n", c);
   char d[3];
   str_copy( c, d );  // Deliberately overflow d
   printf("c = %s and d = %s.\n", c, d);

   return 0;  // Proper exit code if successful 

}
