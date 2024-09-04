#include <iostream>

/*
 *
 * 6.5
 *
 *
 */

int AbsoluteValue(int v) {

	if (v < 0) {
		return -v;
	}

	return v;
}

int main () {

	int v;
	if(std::cin >> v) {} else { return -1; }
	std::cout << AbsoluteValue(v) << std::endl;
	return 0;
}
