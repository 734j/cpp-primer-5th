#include <iostream>
#include <vector>
#include <iterator>

/*
 *
 * 3.43
 *
 *
 */

int main () {

	int ia[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	for (int (&a)[4] : ia) { // A reference to an array of 4 int's
		// I'll be honest i would not have figured that out myself, i did search the internet for answers.
		for (int aa : a) {
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
	for(int (*p)[4] = std::begin(ia) ; p != std::end(ia) ; ++p) {
		for(int *pp = std::begin(*p) ; pp != std::end(*p) ; ++pp) {
			std::cout << *pp << " ";
		}

		std::cout << std::endl;
	}

	return 0;
}
