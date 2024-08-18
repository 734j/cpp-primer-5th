#include <iostream>

/*
 *
 * 4.16
 *
 * Added a mockup getPtr function to demonstrate
 */

int *getPtr(int *f) {
	
	return f;
}

int main () {
	
	int f;
	int *p = nullptr;
	if ((p = getPtr(&f)) != 0) {
		std::cout << "not nullptr" << std::endl;
	}

	int i = 1024;
	if (i == 1024) {
		std::cout << "i: 1024" << std::endl;
	}
	
	return 0;
}
