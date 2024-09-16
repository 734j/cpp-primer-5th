#include <iostream>

/*
 *
 * 6.51
 *
 *
 */

void f() {

	std::cout << "f()" << std::endl;
}

void f(int i) {

	std::cout << "f(int) " << i << std::endl;
}

void f(int i, int j) {

	std::cout << "f(int, int) " << i << " " << j << std::endl;
}

void f(double a, double b = 3.14) {

	std::cout << "f(double, double) " << a << " " << b << std::endl;
}

int main () {

	/*
	  1 // void f();
	  2 // void f(int);
	  3 // void f(int, int);
	  4 // void f(double, double = 3.14);
	  
	  (a) ambiguous?
	  (b) 2
	  (c) 3
	  (d) 4
	 */
	// f(2.56, 42); Ambiguous
	f(42);
	f(42, 0);
	f(2.56, 3.14);
	return 0;
}
