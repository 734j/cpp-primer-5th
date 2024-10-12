#include <iostream>
#include <list>
#include <deque>

/*
 *
 * 9.20
 *
 *
 */

int main () {
	
	std::deque<int> odd;
	std::deque<int> even;
	std::list<int> numbers = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	for(auto &a : numbers) {
		if((a % 2) == 0) {
			even.push_back(a);
		} else {
			odd.push_back(a);
		}
	}

	std::cout << "Even: \n";
	for(auto &a : even) {
		std::cout << a << " ";
	}

	std::cout << "\nOdd: \n";
	for(auto &a : odd) {
		std::cout << a << " ";
	}

	std::cout << std::endl;
	return 0;
}
