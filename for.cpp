#include <iostream>

/*
 * 
 * For looping
 *
 * 
 * 
 *
 *
 */

int main (void) {

	for(int val = 1 ; val <= 10 ; val++) {
		std::cout << val << std::endl;
	}
	
	for(int val2 = 10 ; val2 >= 1 ; val2--) {
		std::cout << val2 << std::endl;
	}

	std::cout << "Done." << std::endl; // We send text to 'cout' a so called 'ostream'
	int64_t one = 0;
	int64_t two = 0;
	int64_t sum = 0;
	std::cin >> one >> two;
	int64_t original_one = one;
	for( ; one <= two ; one++) {
		sum += one;
	}

	std::cout << "The sum of "<< original_one  << " to " << two  << " inclusive is: " << sum << std::endl;
	int64_t sum2 = 0;
	for(int64_t i = -100 ; i <= 100 ; ++i) {
		sum2 += i;
	}

	std::cout << sum2 << std::endl;
	std::cout << "Insert as many numbers as you want" << std::endl;
	std::cout << "Press CTRL + D when done." << std::endl;
	int value = 0, sum3 = 0;
	while(std::cin >> value) {
		sum3 += value;
	}
	
	std::cout << "sum of your numbers: " << sum3 << std::endl;
	return 0;
}
