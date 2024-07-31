#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 2.35
 *
 *
 */

int main () {

	const int i = 42; // const int
	auto j = i; // int
	const auto &k = i; // const int&
	auto *p = &i; // pointer to const int? (const int*) or pointer to pointer?
	auto p2 = &i;
	const auto j2 = i, &k2 = i; 
	// const int       // reference to const int (const int&)
	std::cout << i << "\n"
			  << j << "\n"
			  << k << "\n"
			  << p << "\n"
			  << p2 << "\n"
			  << j2 << "\n"
			  << k2 << std::endl;
	return 0;
}
