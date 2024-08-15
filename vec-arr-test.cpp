#include <iostream>
#include <vector>
#include <iterator>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 
 *
 *
 */

int main () {

	int arr[] = {1,43,47,3465,3,553,2,667,31};
	std::vector<int> varr1(std::begin(arr), std::end(arr));
	std::vector<int> varr2(arr+0, arr+9);
	for(auto a : varr1) {
		std::cout << a << " ";
	}

	std::cout << std::endl;
	for(auto a : varr2) {
		std::cout << a << " ";
	}

	std::cout << std::endl;
	return 0;
}
