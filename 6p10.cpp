#include <iostream>

/*
 *
 * 6.10
 *
 *
 */

void intswapper(int *i1, int *i2) {

	int tmp1 = *i1;
	int tmp2 = *i2;
	*i1 = tmp2;
	*i2 = tmp1;
}

int main () {

	int i1 = 7372;
	int i2 = 8282;
	std::cout << "i1: " << i1 << "\ni2: " << i2 << std::endl;
	intswapper(&i1, &i2);
	std::cout << "i1: " << i1 << "\ni2: " << i2 << std::endl;
	return 0;
}
