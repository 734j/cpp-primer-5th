#include <iostream>

/*
 *
 * 6.11
 *
 *
 */

void resettozero(int &i) {

	i = 0;
}

int main () {

	int i = 2132;
	std::cout << i << std::endl;
	resettozero(i);
	std::cout << i << std::endl;
	return 0;
}
