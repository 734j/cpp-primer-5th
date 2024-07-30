#include <iostream>
#include "sales_item.hpp"

/*
 *
 * A little test
 *
 *
 */

constexpr int get_number() {

	return 999;
}

int main () {

	constexpr int i = get_number();
	std::cout << i << std::endl;

	return 0;
}
