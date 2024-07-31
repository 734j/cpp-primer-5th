#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 2.36
 *
 *
 */

int main () {

	int a = 3;
	int b = 4;
	decltype(a) c = a; // int // c == 3
	decltype((b)) d = a; // int& // d == 3
	++c; // 4
	++d; // 4
	std::cout << c << " <c\n" << d << " <d" << std::endl;
	std::cout << b << std::endl;
	return 0;
}
