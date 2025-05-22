#include <iostream>
#include <string>

/*
 *
 * Write a program that finds each numeric character and then each alpha-
betic character in the string "ab2c3d7R4E6". Write two versions of the program.
The first should use find_first_of, and the second find_first_not_of.
 *
 * Version 1
 */

std::string find_numerics(const std::string a) {

	std::string numerics = "0123456789";
	std::string store;
	std::string::size_type pos = 0;
	while((pos = a.find_first_of(numerics, pos)) != std::string::npos) {
		store += a[pos];
		++pos;
	}
	
	return store;
}

std::string find_alphabetics(const std::string a) {

	std::string alphabetics = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string store;
	std::string::size_type pos = 0;
	while((pos = a.find_first_of(alphabetics, pos)) != std::string::npos) {
		store += a[pos];
		++pos;
	}
	
	return store;
}

int main () {

	std::string a = "ab2c3d7R4E6";
	std::cout << "alphabetic: " << find_alphabetics(a) << '\n'
			  << "numeric: " << find_numerics(a) << std::endl;
	return 0;
}
