#include <iostream>
#include <cctype>

/*
 *
 * 6.17
 *
 *
 */

bool contains_captial(const std::string &cs) {

	bool cc = false;
	for(auto a : cs) {
		if(isupper(a)) {
			cc = true;
			break;
		}
	}

	return cc;
}

void tolower_str(std::string &cs) {
	
	for(auto &a : cs) {
		a = tolower(a);
	}
}

std::string tolower_str_literals_incl(const std::string &cs) {

	std::string ret = cs;
	for(auto &a : ret) {
		a = tolower(a);
	}

	return ret;
}

int main () {

	/*
	  They do need to have different types. With contains_capital we only need to read
	  the string and tell if it has an uppercase or not.

	  With tolower we actually need to change a string. Or perhaps return a lowercase version.
	  This does mean that we can't use string literals as arguments. Well... If we use a reference.

	  We don't actually NEED to use a reference if we really wanted to use literals as well.
	  Because then we need a different approach for the function.
	  There are several different ways we can define this function really.
	 */
	
	std::cout << contains_captial("hello") << std::endl;
	std::cout << contains_captial("Hello") << std::endl;
	std::string aa = "HELLO!!!";
	std::cout << aa << std::endl;
	tolower_str(aa);
	std::cout << aa << std::endl;
	std::string aa2 = "WOWZA!";
	std::string aa3 = tolower_str_literals_incl(aa2);
	std::cout << aa3 << std::endl;
	std::cout << tolower_str_literals_incl("HIIII!") << std::endl;
	return 0;
}
