#include <iostream>

/*
 *
 * Trying to make sense of const
 *
 *
 */

int main () {
	int a = 0;
	int b = 0;
	int c = 0;
	int const* pointer1 = &a; // Cannot change underlying object, can point to other object (Please for the love of god dont use this version its so confusing, use pointer3 version instead because its the same thing and much more clear
	int *const pointer2 = &b; // Can change underlying object, can not point to new object
	const int* pointer3 = &c; // Cannot change underlying object, can point to other object
	std::cout << pointer1 << "\n"
			  << pointer2 << "\n"
			  << pointer3 << std::endl;

	const int *const pointer4 = &a; // Cannot change underlying object, cannot point to another object
	std::cout << pointer4 << std::endl;
	return 0;
}
