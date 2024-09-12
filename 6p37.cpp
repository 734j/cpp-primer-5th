#include <iostream>

/*
 *
 * 6.37
 *
 *
 */

std::string (&myfunction())[10];

auto myfunction2() -> std::string(&)[10]; // This is obviously the easiest way to do it

std::string myarray[10];
decltype(myarray) &myfunction3();

int main () {
	return 0;
}
