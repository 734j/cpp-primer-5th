#include <iostream>
#include <deque>

/*
 *
 * 9.18
 *
 *
 */

int main () {

	std::string input;
	std::deque<std::string> ds;
	while(std::cin >> input) {
		ds.push_back(input);
	}

	for(auto cbeg = ds.cbegin() ; cbeg != ds.cend() ; ++cbeg) {
		std::cout << *cbeg << " ";
	}

	std::cout << std::endl;
	return 0;
}
