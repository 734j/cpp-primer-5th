#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.32
 *
 * 
 */

int main () {

	constexpr size_t ArraySize = 10;
	int MyArray[ArraySize];
	int MyArray2[ArraySize];
	for(size_t Index = 0 ; Index != ArraySize ; ++Index) {
		MyArray[Index] = Index;
	}

	for(size_t Index = 0 ; Index != 10 ; ++Index) {
		MyArray2[Index] = MyArray[Index];
	}

	for(auto i : MyArray) {
		std::cout << i << std::endl;
	}

	std::cout << std::endl;
	for(auto i : MyArray2) {
		std::cout << i << std::endl;
	}
	
	std::cout << std::endl;

	// Vector version
	size_t VecSize = 10;
	std::vector<int> MyVec;
	std::vector<int> MyVec2;
	for(size_t Index = 0 ; Index != VecSize ; ++Index) {
		MyVec.push_back(Index);
	}

	MyVec2 = MyVec;
	// If we wanted to we could also initialize MyVec2 here instead of above
	// std::vector<int> MyVec2 = MyVec;
	
	for(auto i : MyVec) {
		std::cout << i << std::endl;
	}

	std::cout << std::endl;
	for(auto i : MyVec2) {
		std::cout << i << std::endl;
	}
	
	return 0;
}
