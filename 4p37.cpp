#include <iostream>

/*
 *
 * 4.37
 *
 *
 */

int main () {

	char s = 'a'; // just a variable we can use the address for to make the program not segfault
	int i = 0;
	double d = 0;
	const std::string *ps = nullptr;
	char *pc = &s;
	void *pv = &s;
	pv = const_cast<std::string*>(ps);
	i = static_cast<int>(*pc);
	pv = static_cast<void*>(&d);
	pc = static_cast<char*>(pv);
	if(i || d) {} // stop compiler from complaining
	
	return 0;
}
