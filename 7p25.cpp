#include "screen.hpp"
/*
 *
 * 7.25
 *
 *
 */

int main () {

	// I am not really sure what this means...
	Screen s1;
	Screen s2(100, 100, '0');
	Screen s3 = s1;
	s1 = s2;
	return 0;
}
