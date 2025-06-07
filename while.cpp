#include <iostream>
#include <cstdint>

/*
 * 
 * A little bit of while looping
 *
 * 
 * 
 *
 *
 */

int main (void) {

	int val = 1;
	int val2 = 10;
	while(val <= 10) {
		std::cout << val << std::endl;
		val++;
	}
	
	while(val2 >= 1) {
		std::cout << val2 << std::endl;
		val2--;
	}

	std::cout << "Done." << std::endl; // We send text to 'cout' a so called 'ostream'
	uint64_t sum = 0;
	uint64_t one = 0;
	uint64_t two = 0;
	std::cin >> one >> two;
	uint64_t original_one = one;
	while(one <= two) {
		sum += one;
		one++;
	}

	std::cout << "The sum of "<< original_one  << " to " << two  << " inclusive is: " << sum << std::endl;
	return 0;
}
