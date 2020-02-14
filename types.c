// Include external libraries
#include <stdio.h>
#include <stdlib.h>

// Examples
typedef struct coord_struct{int x, y;} coord;

// Create coordinate based on y = mx + b
coord make_coord( int m, int x, int b ){
	coord c;
	c.y = m*(c.x=5)+b;  // Note assignment inside this
	return c;
}

// Program execution starts here
int main(int argc, char **argv){
	typedef unsigned short uint16;  // Alias unsigned shot as uint16
	uint16 x = 65535;  // Use new type as normal

	// Define a new struct and create a new type from it
	typedef struct struct_name{float a; float b;} type_name;
	
	coord c_1 = { 15, 16 };  // Declare var c_1 as coord
	printf("C_1 is ( %d, %d ).\n", c_1.x, c_1.y);
	
	coord c_2 = make_coord(2, 5, 3);
	printf("y = 2x + 3. C_2 is ( %d, %d ).\n", c_2.x, c_2.y);

	return 0;  // Return 0 to indicate successful execution;
}
