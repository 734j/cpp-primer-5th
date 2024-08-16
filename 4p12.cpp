#include <iostream>

/*
 *
 * 4.12
 *
 *
 */

int main () {

	int i = 1;
	int j = 9;
	int k = 10;

	if(i != (j < k)) { // j < k is evaluated first
		// because j < k now it will return true
		// When 'i' is NOT true(aka NOT 0) then print below
		std::cout << "..." << std::endl;
	}
	
	return 0;
}
