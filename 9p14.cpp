#include <iostream>
#include <list>
#include <vector>

/*
 *
 * 9.14
 *
 *
 */

int main () {

	std::list<const char*> lcp = {"a","asjksd","skjk333","dkowdkjfdkjfd","wwdfsd", "eeeeeeee", "1253653463"};
	std::vector<std::string> vs;
	vs.assign(lcp.cbegin(), lcp.cend());
	for(auto &a : lcp) {
		std::cout << a << " ";
	}

	std::cout << std::endl;
	for(auto &a : vs) {
		std::cout << a << " ";
	}

	std::cout << std::endl;
	return 0;
}
