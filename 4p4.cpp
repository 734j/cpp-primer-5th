#include <iostream>

/*
 *
 * 4.4
 *
 *
 */

int main () {

	int res1 = ((((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2));
	int res2 = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	std::cout << res1 << " " << res2 <<  std::endl;
	return 0;
}
