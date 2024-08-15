#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"
#include <iterator>

/*
 *
 * 3.45
 *
 *
 */

int main () {

	int ia[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	for (auto &a : ia) {
		for (auto aa : a) {
			std::cout << aa << " ";
		}
		
		std::cout << std::endl;
	}

	std::cout << std::endl;
	for(size_t i = 0 ; i != 3 ; ++i) {
		for(size_t j = 0 ; j != 4 ; ++j) {
			std::cout << ia[i][j] << " ";
		}
		
		std::cout << std::endl;
	}

	std::cout << std::endl;
	for(auto p = std::begin(ia) ; p != std::end(ia) ; ++p) {
		for(auto pp = std::begin(*p) ; pp != std::end(*p) ; ++pp) {
			std::cout << *pp << " ";
		}

		std::cout << std::endl;
	}

	return 0;
}
