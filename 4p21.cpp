#include <iostream>
#include <vector>

/*
 *
 * 4.21
 *
 *
 */

int main () {

	std::vector<int> odddouble = {1,34,53,11,2,35,442,90,100,23,20,33,10,40,20,50};
	for(auto a : odddouble) {
		std::cout << a << " ";
	}
	
	std::cout << std::endl;
	for(auto &a : odddouble) {
		a = a % 2 ? a * 2 : a ;
	}

	for(auto a : odddouble) {
		std::cout << a << " ";
	}
	
	std::cout << std::endl;
	return 0;
}
