#include <iostream>
#include "sales_item.hpp"

/*
 *
 * testing with auto
 *
 *
 */

int main () {
	
	double ff = 3.14;
	auto i = 0, *p = &i;
	auto i2 = 0.0, i3 = ff;
	std::cout << i << " " << *p << " " << i2 << " " << i3 << std::endl;
	const int gg = 66;
	const auto pgg = &gg; // if we want toplevel const then we have to say it before auto
	std::cout << gg << " <gg\n" << *pgg << " <*pgg" << std::endl;
	std::cout << &gg << " <&gg\n" << pgg << " <pgg" << std::endl;

	int ci = 99;
	auto &g = ci;
	const auto &j = 42; // ok: we can bind a const reference to a literal
	std::cout << g << " <g\n" << j << " <j" << std::endl;
	g += 1;
	//j += 1; // Not possible
	std::cout << g << " <g\n" << j << " <j" << std::endl;
	return 0;
}
