#include <iostream>
#include <list>
#include <vector>

/*
 *
 * 9.21
 *
 * It's the same thing. Vector does not have push_front so this would be necessary.
 * It's an expensive operation to do this so it woul be best to use a deque
 */

int main () {

	std::string word;
	std::vector<std::string> lst;
	auto iter = lst.begin();
	while (std::cin >> word) {
		iter = lst.insert(iter, word); // same as calling push_front
	}

	for(auto &a : lst) {
		std::cout << a << std::endl;
	}

	return 0;
}
