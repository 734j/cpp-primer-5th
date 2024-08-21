#include <iostream>

/*
 *
 * 4.29
 *
 *
 */

int main () {

	int x[10];
	int *p = x;
	auto xx = sizeof(x) / sizeof(*x);
	auto pp1 = sizeof(p);
	auto pp2 = sizeof(*p);
	std::cout << xx << std::endl; // int is 32bit on my machine therefore 40 / 4 = 10
	std::cout << pp1 / pp2 << std::endl; // we get the size of a pointer(8) then the size of an int(4) = 2
	return 0;
}
