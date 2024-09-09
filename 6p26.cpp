#include <iostream>
#include <iterator>

/*
 *
 * 6.26
 *
 * Honestly not sure what i was meant to do for this exercise so
 * ill just print the arguments we give the program.
 */

int main (int argc, char **argv) {

	if(argc < 1) {
		return -1;
	}

	for(size_t i = 1 ; argv[i] != 0  ; i++) {
		std::cout << argv[i] << std::endl;
	}
	
	return 0;
}
