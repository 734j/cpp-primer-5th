#include <iostream>
#include <vector>

/*
 *
 * 9.23
 *
 *
 */

int main () {

	std::vector<int> c = {1};
	if (c.size() == 1) {
		// val and val2 are copies of the value of the first element in c
		auto val = *c.begin(), val2 = c.front();
		// val3 and val4 are copies of the of the last element in c
		auto last = c.end();
		auto val3 = *(--last); // can’t decrement forward_list iterators
		auto val4 = c.back(); // not supported by forward_list

		std::cout << val << "\n"
				  << val2 << "\n"
				  << val3 << "\n"
				  << val4 << "\n";
		if(val || val2 || val3 || val4) {}

	}

	
	return 0;
}
