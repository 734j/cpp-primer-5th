#include <iostream>

/*
 *
 * 4.13
 *
 * 
 */

int main () {
	
	
	int i1;
	int i2;
	double d1;
	double d2;
	double threepointfive = 3.5; // made a variable for 3.5 to avoid compiler errors
	d1 = i1 = threepointfive; // i == 3, d == 3
	i2 = d2 = threepointfive; // d == 3.5, i == 3
	std::cout << d1 << " <-d1(3) (3)i1-> " << i1 << std::endl;
	std::cout << d2 << " <-d2(3.5) (3)i2-> " << i2 << std::endl;
	return 0;
}
