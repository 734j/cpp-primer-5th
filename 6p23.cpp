#include <iostream>
#include <iterator>

/*
 *
 * 6.23
 *
 *
 */

void printint(const int i) {

	std::cout << i << std::endl;
}

void print1(const int *cbeg, const int *cend) {

	while(cbeg != cend) {
		std::cout << *cbeg++ << std::endl;
	}
}

void print2(const int arr[], const size_t size) {

	for(size_t i = 0 ; i != size ; i++) {
		std::cout << arr[i] << std::endl;
	}
}

int main () {

	int i = 0;
	int j[2] = {0, 1};
	printint(i);
	printint(10);
	print1(std::cbegin(j), std::cend(j));
	print2(j, std::cend(j) - std::cbegin(j));
	return 0;
}
