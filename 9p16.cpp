#include <iostream>
#include <vector>
#include <list>

/*
 *
 * 9.16
 *
 *
 */

int main () {
	
	std::vector<int> v1;
	std::list<int> v2;
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

	bool iseq = true;
	auto v1beg = v1.cbegin();
	auto v2beg = v2.cbegin();
	for( ; v1beg != v1.cend() && v2beg != v2.cend() ; ++v1beg, ++v2beg) {
		if(*v1beg != *v2beg) {
			iseq = false;
			break;
		}
	}

	if(iseq == true) {
		std::cout << "equal!" << std::endl;
	}
	
	return 0;
}
