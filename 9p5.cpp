#include <iostream>
#include <vector>

/*
 *
 * 9.5
 *
 *
 */

std::vector<int>::const_iterator FindValue(std::vector<int>::const_iterator CBegin,
										   std::vector<int>::const_iterator CEnd,
										   int Value) {

	for( ; CBegin != CEnd ; ++CBegin) {
		if(*CBegin == Value) {
			return CBegin;
		}
	}
	
	return CEnd;
}

int main () {
	
	int Value;
	if(std::cin >> Value) {} else { return -1; }

	std::vector<int> a = {1,4,2,545,42,6,334,24,5,224,7,6,9,32,3,63,436};
	if(FindValue(a.cbegin(), a.cend(), Value) == a.cend()) {
		return 0;
	}

	std::cout << "Value found!\n" << std::ends;
	return 0;
}
