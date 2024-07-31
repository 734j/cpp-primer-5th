#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 2.33, 2.34
 *
 *
 */

int main () {

	int i = 0, &r = i;
	const int ci = i, &cr = ci;
	
	auto a = r;  // int
	auto b = ci;  // int
	auto c = cr;  // int
	auto d = &i;  // int *
	auto e = &ci;  // const int *
	const auto f = ci;  // const int
	auto &g = ci;  // const int &
	std::cout << a << " " << b << " " << c << " " << d << " "
			  << e << " " << f << " " << g << std::endl;

	a = 42; // valid
	std::cout << a << std::endl;
	
	b = 42; // valid
	std::cout << a << std::endl;
	
	c = 42; // valid
	std::cout << a << std::endl;

	//d = 42; // inValid
	//std::cout << a << std::endl;

	//e = 42; // inValid
	//std::cout << a << std::endl;

	//f = 42; // inValid
	//std::cout << a << std::endl;

	//g = 42; // inValid
	//std::cout << a << std::endl;
	return 0;
}
