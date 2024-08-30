#include <iostream>

/*
 *
 * 5.20
 *
 *
 */

int main () {

	std::string s;
	std::string tmp;
	bool b = false;
	while(std::cin >> s) {
		if(tmp == s) {
			b = true;
			break;
		}
		tmp = s;
	}

	if(b) {
		std::cout << tmp << std::endl;
	} else {
		std::cout << "There were no repeating words" << std::endl;
	}
	
	return 0;
}
