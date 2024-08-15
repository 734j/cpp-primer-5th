#include <iostream>

/*
 *
 * 2.20
 *
 *
 */

int main () {

	int i = 42;
	int *p = &i;
	*p = *p * *p; // Same as i = i * i;
	std::cout << "i: " << i
			  << "\n*p: " << *p << std::endl;
	
	return 0;
}
