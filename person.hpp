#ifndef PERSON_H
#define PERSON_H
#include <string>

struct Person {
	std::string Name;
	std::string Address;
	std::string GetAddress() const { return Address; }
	std::string GetName() const { return Name; }
};

#endif
