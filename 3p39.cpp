#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <limits>

/*
 *
 * 3.39
 *
 *
 */

int main () {

	std::string s1;
	std::string s2;
	if(std::cin >> s1 >> s2) {} else { return -1; }
	if(s1 == s2) {
		std::cout << "Both strings are equal!" << std::endl;
	} else {
		std::cout << "The strings are not equal!" << std::endl;
	}

	// DUDE i forgot how painful input buffers can be!!! THIS SUCKS! This input sucks and we can only input the maximum characters but whatever im not spending more time on this exercise
	constexpr size_t cstring_size = 10;
	char cs1[cstring_size];
	char cs2[cstring_size];
	cs1[0] = '\0';
	cs2[0] = '\0';
	for(size_t i = 0 ; i != cstring_size-1 ; ++i) {
		std::cin >> cs1[i];
		cs1[i+1] = '\0';
	}

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for(size_t i = 0 ; i != cstring_size-1 ; ++i) {
		std::cin >> cs2[i];
		cs2[i+1] = '\0';
	}

	if(std::strcmp(cs1, cs2) == 0) {
		std::cout << "Both strings are equal!" << std::endl;
	} else {
		std::cout << "The strings are not equal!" << std::endl;
	}
	
	return 0;
}
