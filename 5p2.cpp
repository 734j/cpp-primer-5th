#include <iostream>

/*
 *
 * 5.2
 *
 *
 */

int main () {

	// A block is when we need to do multiple statements for example within a loop (which only requires 1)
	// A block is also useful to contain objects in a certain scope and such.
	int i = 0;
	int j = 0;
	while(i != 100) { // Start of block
		++i;
		j = i * 2;
	} // end of block

	std::cout << i << " " << j << std::endl;
	return 0;
}
