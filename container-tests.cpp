#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>
#include <string>

/*
 *
 * 
 *
 *
 */

void deque_popfront_pushback_subscript() {

	std::deque<int> di{1,2,3,4,5,6,7,8,9,10};
	for(int i = 0 ; i != 100000 ; ++i) {
		for(auto &a : di) {
			std::cout << a << " " ;
		}
		std::cout << std::endl;
		di.pop_front();
		di.push_back(di[8]+1);
	}
}

void deque_popfront_pushback_iterator() {

	std::deque<int> di{1,2,3,4,5,6,7,8,9,10};
	for(int i = 0 ; i != 100000 ; ++i) {
		for(auto &a : di) {
			std::cout << a << " " ;
		}
		std::cout << std::endl;
		di.pop_front();
		auto a = di.rbegin();
		di.push_back(*a+1);
	}
}

int main () {

	deque_popfront_pushback_iterator();
	deque_popfront_pushback_subscript();
	return 0;
}
