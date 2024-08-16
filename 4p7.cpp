#include <iostream>
#include <climits>

/*
 *
 * 4.7
 *
 *
 */

int main () {

	unsigned short int i = -1; // Underflow?
	std::cout << i << " " << std::endl;
	short int sii = 1;
	short int si = SHRT_MAX + sii; // Overflow
	std::cout << si << " " << std::endl;
	unsigned short int usii = 1; // Overflow
	unsigned short int usi = USHRT_MAX + usii;
	std::cout << usi << " " << std::endl;
	short int d = SHRT_MAX;
	short int f = SHRT_MAX + d;
	std::cout << f << " " << std::endl;
	return 0;
}
