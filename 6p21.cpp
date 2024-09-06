#include <iostream>

/*
 *
 * 6.21
 *
 *
 */

int islarger(int i1, const int *i2) {

	if(i1 > *i2) {
		return i1;
	}

	return *i2;
}

int main () {

	int a = 101;
	int b = 253;
	int c = 0;
	c = islarger(a, &b);
	std::cout << c << std::endl;
	return 0;
}
