#include <iostream>

/*
 *
 *
 *
 *
 */

int main () {
	
	std::ostream *a = &std::cout; // get address of cout
	std::ostream *b = std::cin.tie(&std::cout); // Tie cin and cout
	std::ostream *c = std::cin.tie(); // return address of that cin is tied to (cout)
	std::cin.tie(0); // Untie by giving null
	std::ostream *e = std::cin.tie(); // Check if it's tied, should return null
	std::cin.tie(c); // Tie it again to address pointed to by c
	std::ostream *f = std::cin.tie(); // Check if it's tied. Should return same address as c or &std::cout
	std::cout << a << "\n" << c << std::endl;
	std::cout << e << "\n" << f << std::endl;
	if(b) // compiler please be quiet
		
	return 0;
}
