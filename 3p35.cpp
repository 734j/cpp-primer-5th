#include <iostream>
#include <vector>
#include <iterator>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.35
 *
 *
 */

int main () {

	int ia[50]; // We make it uninitialized and print it so we can easily see before and after
	for(auto r : ia) {
		std::cout << r << " ";
	}

	std::cout << std::endl;
	/*
	// Different loops we can use, commented out here is using a while loop
	// And uncommented further below is using a for loop
	
	auto p_begin = std::begin(ia);
	auto p_end = std::end(ia);
	while(p_begin != p_end) {
		*p_begin = 0;
		++p_begin;
	}
	*/
	for(auto p_beg = std::begin(ia) ; p_beg != std::end(ia) ; ++p_beg) {
		*p_beg = 0;
	}
	
	for(auto r : ia) {
		std::cout << r << " ";
	}
	
	std::cout << std::endl;
	return 0;
}
