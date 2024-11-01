#include <iostream>
#include <vector>

/*
 *
 * 9.41
 *
 *
 */

int main () {

	std::vector<char> vc = {'a','b','c','d','e','f','g','h','i','j'};
	std::string s1(vc.cbegin(), vc.cend());
	std::cout << s1 << std::endl;
	return 0;
}
