#include <iostream>

/*
 *
 * 4.30
 *
 * Wow! This was a tricky question.
 */

int f() {
	return 1;
}

struct ddd {
	int mem[10];
};

int main () {

	struct ddd ggg;
	struct ddd *p = &ggg;
	int i = 0;
	int x = 0;
	int y = 0;
	unsigned int a = 0;
	unsigned int b = 0;
	std::cout << sizeof (x) + y << std::endl;
	std::cout << sizeof (p->mem[i]) << std::endl;
	std::cout << (sizeof (a) < b) << std::endl;
	std::cout << sizeof (f()) << std::endl;
	return 0;
}
