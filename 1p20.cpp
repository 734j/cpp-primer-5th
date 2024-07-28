#include <iostream>
#include "sales_item.hpp"

/*
 *
 * Exercise 1.20
 *
 *
 */

int main () {

	Sales_item item1;
	while(std::cin >> item1) {
		std::cout << item1 << std::endl;
	}
	
	return 0;
}
