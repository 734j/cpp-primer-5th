#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"
#include <iterator>

/*
 *
 * 3.42
 *
 * 
 */

int main () {

	std::vector<int> va = {23,432423,43253,123,787,45677,3345,657784,3453,10};
	int arr[10]; // Really annoying that there is no way to take the size of the vector and use it as the size of this array.
	int i = 0;
	for(auto a : va) {
		arr[i] = a;
		++i;
	}

	for(auto a : arr) {
		std::cout << a << " ";
	}

	std::cout << std::endl;
	return 0;
}
