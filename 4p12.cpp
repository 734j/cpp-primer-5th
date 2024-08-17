#include <iostream>

/*
 *
 * 4.12
 *
 * These conditions make my head spin its actually so confusing to think about...
 */

int main () {

	int i = 0;
	int j = 9;
	int k = 10;

	// true == >0
	// false == 0
	// i != >0
	// AKA
	// i == 0
	//then print ...
	if(i != (j < k)) { // j < k is evaluated first
		std::cout << "..." << std::endl;
	}
	
	return 0;
}
