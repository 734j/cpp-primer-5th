#include <iostream>
#include <vector>
#include <iterator>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.36
 *
 * 
 */

int main () {

	constexpr size_t ArrSize = 5;
	int arr1[ArrSize];
	int arr2[ArrSize];
	std::cout << "Input " << ArrSize << " numbers: " << std::endl;
	for(auto &a : arr1) {
		if(std::cin >> a) {} else { return -1; }
	}

	std::cout << "Input " << ArrSize << " numbers: " << std::endl;
	for(auto &a : arr2) {
		if(std::cin >> a) {} else { return -1; }
	}

	bool f = true;
	for(size_t ii = 0 ; ii != ArrSize ; ++ii) {
		if(arr1[ii] != arr2[ii]) {
			std::cout << "The arrays are not equal." << std::endl;
			f = false;
			break;
		}
	}

	if(f == true) {
		std::cout << "The arrays are equal." << std::endl;
	}

	int a = 0;
	std::vector<int> vec1;
	std::vector<int> vec2;
	std::cout << "Input " << ArrSize << " numbers: " << std::endl;
	for(decltype(vec1.size()) i = 0 ; i != ArrSize ; ++i) {
		if(std::cin >> a) {} else { break; }
		vec1.push_back(a);
	}

	std::cout << "Input " << ArrSize << " numbers: " << std::endl;
	for(decltype(vec2.size()) i = 0 ; i != ArrSize ; ++i) {
		if(std::cin >> a) {} else { break; }
		vec2.push_back(a);
	}

	if(vec1 != vec2) {
		std::cout << "The vectors are not equal." << std::endl;
		return 0;
	} else if (vec1 == vec2) {
		std::cout << "The vectors are equal." << std::endl;
	}
	
	return 0;
}
