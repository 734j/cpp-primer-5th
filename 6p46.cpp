#include <iostream>

/*
 *
 * 6.46
 *
 *
 */

/*
  Quick note. Giving constexpr to this function will not work for C++
  standards before C++20. If we go by the book this would not work if we
  were compiling for C++11 - C++17

  This will compile and will work if we are compiling for C++20
 */

constexpr bool isShorter(const std::string &s1, const std::string &s2) {

	return s1.size() < s2.size();
}

int main () {

	std::cout << (isShorter("1234", "12345") ? "True" : "False") << std::endl;
	std::string fourlen = "1234";
	std::string fivelen = "12345";
	std::cout << (isShorter(fourlen, fivelen) ? "True" : "False") << std::endl;
	return 0;
}
