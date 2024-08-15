#include <iostream>

/*
 *
 * 2.18
 *
 *
 */

int main () {

	int myval = 10;
	int *point = nullptr;
	std::cout << "myval: " << myval << std::endl;
	point = &myval;
	*point = 1000;
	std::cout << "myval: " << myval << "\n*point: " << *point
			  << "\npoint: " << point << "\n&myval: " << &myval
			  << std::endl;
	
	return 0;
}
