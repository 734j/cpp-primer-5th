#include <iostream>

/*
 *
 * 4.10
 *
 *
 */

int main () {

	int val;
	while(std::cin >> val && val != 42) {
	}

	if(val == 42) {
		std::cout << "We found 42!" << std::endl;
	}
	
	return 0;
}
