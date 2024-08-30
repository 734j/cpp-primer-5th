#include <iostream>
#include <vector>

/*
 *
 * 5.17
 *
 *
 */

int main () {

	std::vector<int> v1 = {1,1,1,1,2};
	std::vector <int> v2 = {1,1,1,1,2};
	auto v1l = v1.size();
	auto v2l = v2.size();
	decltype(v1.cend()) smallestend;
	decltype(v1.cbegin()) smallestbeg;
	decltype(v1.cbegin()) biggestbeg;
	if(v1l > v2l) {
		smallestend = v2.cend();
		smallestbeg = v2.cbegin();
		biggestbeg = v1.cbegin();
	} else if (v2l > v1l) {
		smallestend = v1.cend();
		smallestbeg = v1.cbegin();
		biggestbeg = v2.cbegin();
	} else if (v1l == v2l) {
		smallestend = v1.cend();
		smallestbeg = v1.cbegin();
		biggestbeg = v2.cbegin();
	}

	bool determine_prefix = true;
	for( ; smallestbeg != smallestend ; ++smallestbeg, ++biggestbeg) {
		if(*smallestbeg != *biggestbeg) {
			determine_prefix = false;
			break;
		}
	}

	std::cout << (determine_prefix ? "true" : "false")  << std::endl;
	return 0;
}
