#include <iostream>
#include <vector>

/*
 *
 * 6.33
 *
 *
 */

void recursive_vec_print(std::vector<int>::const_iterator cbeg, std::vector<int>::const_iterator cend) {

	if(cbeg == cend) {
		return;
	}

	std::cout << *cbeg++ << std::endl;
	recursive_vec_print(cbeg, cend);
}

int main () {

	std::vector<int> myvec = {1,2,32,44,2,24,1,62,24};
	recursive_vec_print(myvec.cbegin(), myvec.cend());
	return 0;
}
