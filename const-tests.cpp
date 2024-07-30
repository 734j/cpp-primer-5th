#include <iostream>
#include "sales_item.hpp"

/*
 *
 * Just me testing a bit
 *
 *
 */

int main () {

	int i = 10;
	const int *p = &i;
	const int ci = 42;
	const int &r = ci;
	const int &r2 = i;
	std::cout << *p << " " << i << std::endl;
	std::cout << r << std::endl;
	i = 20;
	std::cout << *p << " " << i << std::endl;
	i = 3443;
	std::cout << r2 << std::endl;
	return 0;
}
