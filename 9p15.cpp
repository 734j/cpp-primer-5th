#include <iostream>
#include <vector>
#include <limits>
/*
 *
 * 9.15
 *
 *
 */

int main () {

	std::vector<int> v1;
	std::vector<int> v2;
	int in = 0;
	std::cout << "v1" << std::endl;
	for(int i = 0 ; i < 10 ; ++i) {
		if(std::cin >> in) {} else {
			std::cout << "Error: Wrong input." << std::endl;
			return -1;
		}
		
		v1.push_back(in);
	}

	std::cout << "v2" << std::endl;
	for(int i = 0 ; i < 10 ; ++i) {
		if(std::cin >> in) {} else {
			std::cout << "Error: Wrong input." << std::endl;
			return -1;
		}
		
		v2.push_back(in);
	}
	
	if(v1 == v2) {
		std::cout << "equal!" << std::endl;
	}
	
	return 0;
}
