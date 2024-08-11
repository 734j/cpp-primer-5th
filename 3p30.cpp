#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.30
 *
 *
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
using std::vector;

int main() {
	/*
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 1; ix <= array_size; ++ix) {
		ia[ix] = ix;
	}

	In the for loop:
	ix should start at 0 rather than 1. Because when we use subscripts it starts at 0.
	In this case, if we were to start with '1' then the first element in the array would remain uninitialized.

	ix should also not be compared to array sized using <=
	array_size only tells us how many elements the array has, but when using subscripts we start at 0, so this means
	we would need to compare to array_size-1 or use just the '<' operator, because then we also check at array_size-1

	If we want to nitpick about the requirements of what the program is supposed to do we could change even more.
	Maybe we want to start at 1 and get an array of 1 - 10?
	*/

	// Fixed version here, fills array with 0 - 9
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 0; ix < array_size; ++ix) {
		ia[ix] = ix;
	}

	// Same program but if we wanted the array to be from 1 - 10
	constexpr size_t array_size2 = 10;
	int ia2[array_size2];
	for (size_t ix2 = 0; ix2 < array_size2; ++ix2) {
		ia2[ix2] = ix2 + 1;
	}

	for(auto i : ia) {
		cout << i << endl;
	}
	
	cout << endl;
	for(auto i : ia2) {
		cout << i << endl;
	}
	
	return 0;
}
