#include <iostream>
#include "sales_item.hpp"

/*
 *
 * Exercise 1.21
 *
 *
 */

int main () {

	Sales_item item1;
	Sales_item item2;
	while(std::cin >> item1 >> item2) {
		std::cout << item1 + item2 << std::endl;
	}
	
	return 0;
}
