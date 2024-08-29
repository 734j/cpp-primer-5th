#include <iostream>

/*
 *
 * 4.38
 *
 *
 */

int main () {

	int i = 3;
	int j = 10;
	double slope = static_cast<double>(j / i); // divide i and j as integers and then cast returned value to double
	// double slope = static_cast<double>(j) / i; I suspect that this version of the expression is what we are actually trying to do
	std::cout << slope << std::endl;
	return 0;
}
