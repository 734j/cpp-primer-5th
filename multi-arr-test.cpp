#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"
#include <iterator>

/*
 *
 *
 *
 *
 */

int main () {

	constexpr size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];
	for (size_t i = 0; i != rowCnt; ++i) {
		for (size_t j = 0; j != colCnt; ++j) {
			ia[i][j] = i * colCnt + j;
		}
	}

	for(auto &a : ia) {
		for(auto b : a) {
			std::cout << b << " ";
		}
		std::cout << std::endl;
	}

	int ia2[rowCnt][colCnt];
	size_t counter = 0;
	for(auto &row : ia2) {
		for(auto &col : row) {
			col = counter;
			++counter;
		}
	}

	std::cout << std::endl;
	for(auto &a : ia2) {
		for(auto b : a) {
			std::cout << b << " ";
		}
		std::cout << std::endl;
	}
	
	std::cout << std::endl;
	for(auto a = std::begin(ia2) ; a != std::end(ia2) ; ++a) {
		for(auto aa = std::begin(*a) ; aa != std::end(*a) ; ++aa) {
			std::cout << *aa << " ";
		}
		std::cout << std::endl;
	}
	
	return 0;
}
