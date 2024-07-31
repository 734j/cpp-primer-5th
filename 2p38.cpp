#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 2.38
 * auto ignores toplevel const and reference
 * decltype included toplevel const and reference
 */

int main () {

	int i = 109; //int
	int *pi = &i; //int*
	const int ff = 1; // const int

	auto ffi = ff; //int
	decltype(ff) ffd = 100; //const int
	auto ai = *pi; // int
	decltype(*pi) di = i; //int&
	
	std::cout << ai << " " // 109
			  << di << " " // 109
			  << ffi << " " // 1
			  << ffd << " " // 100
			  << std::endl;
	return 0;
}
