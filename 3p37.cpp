#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.37
 *
 * 
 */

int main () {

	const char ca[] = {'H', 'e', 'l', 'l', 'o'/*, '\0'*/};
	const char *cp = ca;
	while(*cp) {
		std::cout << *cp << std::endl;
		++cp;
	}
	/*
	 * This causes a buffer overflow because there is no null character at the end of the string
	 * If we put a null-character at the end of the string we don't get an overflow.
	 */
	return 0;
}
