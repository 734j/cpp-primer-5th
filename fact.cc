#include <iostream>
#include <cstdint>

/*
 *
 *
 *
 *
 */

uint64_t fact_i(void) {
	
	uint64_t val;
	if(std::cin >> val) {} else { return 0; }
	uint64_t ret = 1;
	while(val > 1) {
		ret *= val--;
	}
	
	return ret;
}
