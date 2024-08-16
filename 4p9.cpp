#include <iostream>

/*
 *
 * 4.9
 *
 *
 */

int main () {
	// True if:
	// the address pointed to isnt null
	// the first character isnt a null character

	// We can test this by making a string literal, for exmple "Hello world"
	// We can also test by putting the null character \0 in the string literal
	// And we can also test by pointing cp at nullptr
	int choice;
	const char *hw = "Hello world!";
	const char *np = nullptr;
	const char nc = '\0';
	const char *cp;
	std::cout << "1: Hello World | 2: nullptr | 3: null character" << std::endl;
	if(std::cin >> choice) {} else { return -1; }
	
	if(choice == 1) { cp = hw; }
	else if(choice == 2) { cp = np; }
	else if(choice == 3) { cp = &nc; }
	else { return -1; }
	
	if (cp && *cp) {
		std::cout << "valid" << std::endl;
	} else {
		std::cout << "not valid" << std::endl;
	}

	return 0;
}
