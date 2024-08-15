#include <iostream>
#include <vector>
#include <cstring>

/*
 *
 * 3.40
 *
 * Is this overkill?
 */

int main () {

	char ch1[] = "Hello, ";
	char ch2[] = "World!";
	char chfinal[1000];
	chfinal[0] = '\0';
	std::strcpy(chfinal, ch1);
	std::strcat(chfinal, ch2);
	std::cout << chfinal << std::endl;
	return 0;
}
