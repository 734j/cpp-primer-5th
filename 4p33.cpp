#include <iostream>

/*
 *
 * 4.33
 *
 * Wow this might have been the trickiest question ever. I'm still not even sure if i totally get it!
 */

int main () {

	bool someValue = true;
	int res;
	int x = 1;
	int y = 1;
	res = (someValue ? (++x, ++y) : --x), --y;
	std::cout << res << " res"<< std::endl;
	std::cout << x << " x" << std::endl;
	std::cout << y << " y" << std::endl;
	return 0;
}
