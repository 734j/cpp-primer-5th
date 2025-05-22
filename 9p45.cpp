#include <iostream>
#include <string>

/*
 *
 * I'll be honest, i don't get this exercise. 
 * It's pretty weirdly explained. I'll just do something i think is right.
 *
 */

std::string prefix_suffix_creator(const std::string name,
								  const std::string prefix,
								  const std::string suffix) {

	std::string _name = name;
	std::string _prefix = prefix + " ";
	std::string _suffix = " " + suffix;
	_name.insert(_name.cbegin(), _prefix.cbegin(), _prefix.cend());
	_name.append(_suffix);
	return _name;
}

int main() {

	std::cout << prefix_suffix_creator("Michael", "Mr.", "VII") << std::endl;	
	std::string name;
	std::string prefix;
	std::string suffix;
	std::cin >> name >> prefix >> suffix;
	std::cout << prefix_suffix_creator(name, prefix, suffix) << std::endl;
	return 0;
}
