#include <iostream>

/*
 *
 * 6.16
 *
 *
 */

bool is_empty(const std::string &a) {

	return a.empty();
}

int main () {

	std::cout << is_empty("Hello") << std::endl;
	return 0;
}
