#include <iostream>
#include <forward_list>

/*
 *
 * 9.27
 *
 *
 */

int main () {

	std::forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
	for(auto &a : flst) {
		std::cout << a << "\n";
	}
	
	auto bbeg = flst.before_begin();
	auto beg = flst.begin();
	while(beg != flst.cend()) {
		if(*beg % 2 == 1) {
			beg = flst.erase_after(bbeg);
		} else {
			bbeg = beg;
			++beg;
		}
	}

	std::cout << std::endl;
	for(auto &a : flst) {
		std::cout << a << "\n";
	}
	
	return 0;
}
