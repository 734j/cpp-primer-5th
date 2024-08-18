#include <iostream>

/*
 *
 * 4.14
 *
 *
 */

int main () {

	int i = 0;

	//if(42 = i) {} Not valid, error
	int ifs2 = i = 42;
	if(ifs2) { // evaluates as true because nonZero == true
		std::cout << "..." << std::endl;
	}
	
	return 0;
}
