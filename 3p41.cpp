#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"
#include <iterator>

/*
 *
 * 3.41
 *
 * Same thing as i did on my vec-arr-test.cpp 
 */

int main () {

	int arr[] = {23,432423,43253,123,787,45677,3345,657784,3453};
	std::vector<int> va(std::begin(arr), std::end(arr));
	for(auto vaa : va) {
		std::cout << vaa << " ";
	}

	std::cout << std::endl;
	return 0;
}
