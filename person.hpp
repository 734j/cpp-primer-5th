#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <vector>
#include <iostream>

struct Person {
	Person() = default;
	explicit Person(const std::string &name): Name(name) {}
	Person(const std::string &name, const std::string &addr): Name(name), Address(addr) {} 
	std::string Name;
	std::string Address;
	std::string GetAddress() const { return Address; }
	std::string GetName() const { return Name; }
};

std::istream &read(std::istream &pcin, Person &p1) {

	std::getline(pcin, p1.Name);
	std::getline(pcin, p1.Address);
	return pcin;
}

std::ostream &print(std::ostream &pcout, const Person &p1) {

	pcout << p1.GetName() << "\n" << p1.GetAddress();
	return pcout;
}

#endif
