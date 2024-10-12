#include <iostream>
#include <list>

/*
 *
 * 9.19
 *
 * Changes needed: Include list, Change deque in to list. 
 */

int main () {

	std::string input;
	std::list<std::string> ds;
	while(std::cin >> input) {
		ds.push_back(input);
	}

	for(auto cbeg = ds.cbegin() ; cbeg != ds.cend() ; ++cbeg) {
		std::cout << *cbeg << " ";
	}

	std::cout << std::endl;
	return 0;
}
