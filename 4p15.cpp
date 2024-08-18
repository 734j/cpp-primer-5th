#include <iostream>

/*
 *
 * 4.15
 *
 *
 */

int main () {

	double dval;
	int ival;
	int *pi;
	/*
	ival = 0;
	dval = 0;
	pi = 0;

	I don't really see a reason not to do it this way but both of these examples work
	*/
	ival = dval = 0;
	pi = 0;
	std::cout << dval << ival << pi << std::endl;
	return 0;
}
