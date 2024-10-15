#include <iostream>
#include <vector>

/*
 *
 * 9.24
 *
 *
 */

int main () {

	std::vector<int> a;
	std::cout << a.at(0) << std::endl; //Exception
	std::cout << a.front() << std::endl; // Segfault
	std::cout << a.back() << std::endl; // Segfault
	return 0;
}
