#include <iostream>

/*
 *
 * 6.42
 *
 *
 */

std::string make_plural(size_t ctr,
						const std::string &word,
						const std::string &ending = "s"
						) {

	return (ctr > 1) ? word + ending : word;
}

int main () {

	std::cout << make_plural(2, "Success", "es") << std::endl;
	std::cout << make_plural(2, "Success") << std::endl;
	std::cout << make_plural(2, "Failure") << std::endl;
	return 0;
}
