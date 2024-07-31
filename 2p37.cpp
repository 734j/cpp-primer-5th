#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 2.37
 *
 *
 */

int main () {

	int a = 3;
	int b = 4;
	decltype(a) c = a; //int
	//decltype(a = b) d = a; // int&
	std::cout << a << " "
			  << b << " "
			  << c << " "
		//<< d << " "
			  <<std::endl;
	
	return 0;
}
