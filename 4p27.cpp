#include <iostream>

/*
 *
 * 4.27
 *
 *
 */

int main () {

	uint32_t ul1 = 3;
    uint32_t ul2 = 7;

	// 00000011 (ul1)
	// 00000111 (ul2)
	/*
	  ul1 AND ul2:
	  00000011

	  ul1 OR ul2
	  00000111
	 */
	
	std::cout << (ul1 & ul2) << std::endl; // 3
	std::cout << (ul1 | ul2) << std::endl; // 7
	std::cout << (ul1 && ul2) << std::endl; // 1 (true)
	std::cout << (ul1 || ul2) << std::endl; // 1 (true)
	return 0;
}
