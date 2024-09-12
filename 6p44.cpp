#include <iostream>

/*
 *
 * 6.44
 *
 *
 */

inline bool isShorter(const std::string &s1, const std::string &s2) {

	return s1.size() < s2.size();
}

int main () {

	std::cout << (isShorter("1234", "12345") ? "True" : "False") << std::endl;
	return 0;
}
