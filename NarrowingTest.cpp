#include <iostream>

/*
 *
 * Small test, uncomment and turn on compiler warnings to see the issue
 *
 *
 */

double GetValue() {

	return 42.42;
}

int main () {
	/*
	int gv1 = GetValue();
	int gv2{GetValue()};
	int a = 0.5;
	int b{0.5};

	std::cout << "gv1 " << gv1 << "\n"
			  << "gv2 " << gv2 << "\n"
			  << "a " << a << "\n"
			  << "b " << b << std::endl;
	*/
	return 0;
}
