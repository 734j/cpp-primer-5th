#include <iostream>
#include <vector>

/*
 *
 * 9.38
 *
 *
 */

int main () {

	std::vector<int> vi = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	std::vector<int> vi2(100);
	std::vector<int> vi3;
	std::cout << vi.size() << " " << vi.capacity() << std::endl;
	std::cout << vi2.size() << " " << vi2.capacity() << std::endl;
	for(size_t i = 0 ; i != 1025 ; ++i) {
		vi3.push_back(0);
		std::cout << vi3.size() << " " << vi3.capacity() << std::endl;
	}
	
 	return 0;
}
