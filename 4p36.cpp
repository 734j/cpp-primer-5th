#include <iostream>

/*
 *
 * 4.36
 *
 *
 */

int main () {

	int i = 10;
	double d = 2;
	std::cout << (i *= static_cast<int>(d)) << std::endl;
	return 0;
}
