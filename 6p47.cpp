#include <iostream>
#include <vector>
#include <cassert>
#define NDEBUG
/*
 *
 * 6.47
 *
 *
 */

void recursive_vec_print(std::vector<int>::const_iterator cbeg, std::vector<int>::const_iterator cend) {

	if(cbeg == cend) {
		return;
	}

	std::cout << *cbeg++ << std::endl;
	assert((cend - cbeg) != -1);
	#ifndef NDEBUG
	std::cerr << cend - cbeg << std::endl;
	std::cerr << __FILE__ << std::endl;
	std::cerr << __func__ << std::endl;
	std::cerr << __LINE__ << std::endl;
	#endif
	recursive_vec_print(cbeg, cend);
}

int main () {

	std::vector<int> myvec = {1,2,32,44,2,24,1,62,24};
	recursive_vec_print(myvec.cbegin(), myvec.cend());
	return 0;
}
