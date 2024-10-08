#include <iostream>
#include <vector>
#include <list>

/*
 *
 * 9.13
 *
 *
 */

int main () {

	std::vector<int> vi(25, 50);
	std::list<int> li(25, 99);	
	std::vector<double> vb1(vi.cbegin(), vi.cend());
	std::vector<double> vb2(li.cbegin(), li.cend());
	for(auto &a : vb1) {
		std::cout << a << " ";
	}

	std::cout << std::endl;
	for(auto &a : vb2) {
		std::cout << a << " ";
	}
	
	std::cout << std::endl;
	return 0; 
}
