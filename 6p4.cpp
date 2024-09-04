#include <iostream>

/*
 *
 * 6.4
 *
 *
 */

uint64_t fact(void) {
	
	uint64_t val;
	if(std::cin >> val) {} else { return 0; }
	uint64_t ret = 1;
	while(val > 1) {
		ret *= val--;
	}
	
	return ret;
}

int main () {

	std::cout << fact() << std::endl;
	return 0;
}
