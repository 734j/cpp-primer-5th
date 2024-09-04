#include <iostream>

/*
 *
 * 5.24
 *
 *
 */

int main () {

	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	if(b == 0) {
		throw std::runtime_error("You cannot divide by 0!");
	}
	
	std::cout << a / b << std::endl;
	return 0;
}
