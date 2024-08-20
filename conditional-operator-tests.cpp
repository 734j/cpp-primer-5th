#include <iostream>

/*
 *
 * 
 *
 *
 */

int main () {

	unsigned int grade = 0;
	if(std::cin >> grade) {
		if(grade > 100) { return -1; }
		
	} else {
		return -1;
	}

	std::cout << (grade < 60 ? "fail" : "pass") << std::endl;
	return 0;
}
