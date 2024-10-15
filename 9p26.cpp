#include <iostream>
#include <vector>
#include <list>

/*
 *
 * 9.26
 *
 *
 */

int main () {

	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	std::list<int> li;
	std::vector<int> vi;
	for(decltype(std::size(ia)) i = 0 ; i != std::size(ia) ; ++i) {
		li.push_back(ia[i]);
		vi.push_back(ia[i]);
	}

	auto beg = li.begin();
	for( ; beg != li.cend() ; ) {
		if(*beg % 2 == 1) {
			beg = li.erase(beg);
		} else {
			++beg;
		}
	}

	auto begv = vi.begin();
	for( ; begv != vi.cend() ; ) {
		if(*begv % 2 == 1) {
			++begv;
		} else {
			begv = vi.erase(begv);
		}
	}
	
	for(auto &a : li) {
		std::cout << a << "\n";
	}

	std::cout << std::endl;
	for(auto &a : vi) {
		std::cout << a << "\n";
	}

	return 0;
}
