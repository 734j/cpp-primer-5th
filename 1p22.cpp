#include <iostream>
#include "sales_item.hpp"

/*
 * Exercise 1.22
 *
 *
 *
 */

int main () {

	Sales_item item1;
	Sales_item sum;
	if(std::cin >> sum) {
		while(std::cin >> item1) {
			sum += item1;
		}
		
		std::cout << sum << std::endl;
	}

	return 0;
}
