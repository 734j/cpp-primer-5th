#include <iostream>

/*
 *
 * 4.6
 *
 *
 */

int main () {

	int input;
	if(std::cin >> input) {} else { return -1; }

	if(input % 2 == 0) {
		std::cout << "Even" << std::endl;
	} else {
		std::cout << "Odd" << std::endl;
	}
	
	return 0;
}
