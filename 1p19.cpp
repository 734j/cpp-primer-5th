#include <iostream>

/*
 *
 * Exercise 1.19
 *
 *
 */

int main () {

	int64_t beg;
	int64_t end;
	std::cout << "Enter beginning and end number: ";
	std::cin >> beg >> end;
	while(beg <= end) {
		std::cout << beg << " ";
		beg++;
	}

	std::cout << std::endl;
	return 0;
}
