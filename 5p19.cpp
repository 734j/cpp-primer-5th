#include <iostream>

/*
 *
 * 5.19
 *
 *
 */

int main () {

	std::string keepgoing;
	do {
		std::cout << "Enter two strings" << std::endl;
		std::string s1;
		std::string s2;
		std::cin >> s1 >> s2;
		if(s1 > s2) {
			std::cout << "s1 > s2" << std::endl;
		} else if (s2 > s1) {
			std::cout << "s2 > s1" << std::endl;
		} else if (s1 == s2) {
			std::cout << "s1 == s2" << std::endl;
		}

		std::cout << "Continue?" << std::endl;
		std::cin >> keepgoing;
	} while(keepgoing == "Y" || keepgoing == "y");

	return 0;
}
