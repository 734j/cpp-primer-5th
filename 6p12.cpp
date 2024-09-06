#include <iostream>

/*
 *
 * 6.12
 *
 *
 */

void intswapperREF(int &i1, int &i2) {

	int tmp1 = i1;
	i1 = i2;
	i2 = tmp1;
}

int main () {
	
	int i1 = 121212;
	int i2 = 323;
	std::cout << i1 << " " << i2 << std::endl;
	intswapperREF(i1, i2);
	std::cout << i1 << " " << i2 << std::endl;
	return 0;
}
