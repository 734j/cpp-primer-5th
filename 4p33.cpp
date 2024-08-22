#include <iostream>

/*
 *
 * 4.33
 *
 *
 */

int main () {

	bool someValue = true;
	int res;
	int x = 1;
	int y = 1;
	// (sameValue ? (++x, ++y) : --x), --y
	res = someValue ? ++x, ++y : --x, --y;
	std::cout << res << " res"<< std::endl;
	std::cout << x << " x" << std::endl;
	std::cout << y << " y" << std::endl;
	
	return 0;
}
