#include <iostream>

/*
 *
 * 4.25
 *
 *
 */

int main () {

	/*

	  01110001 (q)
	  NOT
	  11111111 11111111 11111111 10001110
	  << 6
	  11111111 11111111 11100011 10000000 (my own calculations)
	  11111111 11111111 11100011 10000000 (output from gdb, added spaces)
	  (seems correct!)
	 */

	// Quick little test where we can examine with GDB if i did it correctly.
	int8_t ch = 0b01110001;
	int32_t cf = ~ch << 6;
	std::cout << cf << std::endl;
	return 0;
}
