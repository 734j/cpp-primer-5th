#include <iostream>
#include <vector>

/*
 *
 * 9.25
 *
 *
 */

int main () {

	std::vector<int> slist;
	auto elem1 = slist.begin();
	auto elem2 = slist.end();
	auto elem1end = slist.end();
	auto elem2end = slist.end();
	// All iterators above are the same
	// And no, nothing happens.
	if(elem1 == elem2) {
		std::cout << "elem1 == elem2" << std::endl;
		elem1 = slist.erase(elem1, elem2);
	}

	if(elem1end == elem2end) {
		std::cout << "elem1end == elem2end" << std::endl;
		elem1end = slist.erase(elem1end, elem2end);
	}
	
	return 0;
}
