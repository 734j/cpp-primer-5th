#include <iostream>
#include "sales_item.hpp"

/*
 *
 * Exercise 1.22 (Not made by me)
 *
 *
 */

int main() {

	Sales_item total, item;
	if (std::cin >> total) {
		while (std::cin >> item)
			total += item;

		std::cout << total << std::endl;
	}
	
	return 0;
}
