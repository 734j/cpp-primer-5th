#include <iostream>

/*
 *
 * 
 *
 *
 */

int main () {

	int i = 0;
	int j = 0;
	int k = 0;
	j = ++i;
	k = i++;
	std::cout << i << " " << j << " " << k << std::endl;
	return 0;
}
