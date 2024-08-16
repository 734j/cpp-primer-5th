#include <iostream>

/*
 *
 * 4.11
 *
 *
 */

int main () {

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	if(std::cin >> a >> b >> c >> d) {} else { return -1; }
	
	if(a > b && b > c && c > d) {
		std::cout << "True!" << std::endl;
	} else {
		std::cout << "False!" << std::endl;
	}
	
	return 0;
}
