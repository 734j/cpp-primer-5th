#include <iostream>
#include <forward_list>

/*
 *
 * 9.28
 *
 *
 */

std::forward_list<std::string> &ch9e28(std::forward_list<std::string> &fl, std::string findme, std::string s) {

	bool success = false;
	auto beg = fl.begin();
	auto end = fl.cend();
	while(beg != end) {
		if(*beg == findme) {
			beg = fl.insert_after(beg, s);
			success = true;
			break;
		} else {
			++beg;
		}
	}

	if(success == false) {
		auto sbeg = fl.begin();
		auto sbbeg = fl.before_begin();
		for(; sbeg != end ; ++sbeg, ++sbbeg) {
			
		}

		fl.insert_after(sbbeg, s);
		
	}
	
	return fl;
}

int main () {

	/*
	  My solution felt a bit hacky but it works, whatever.
	 */
	std::forward_list<std::string> flm = {"HELLO", "AA", "YO", "HELL"};
	std::string s = "HELLOafter";
	ch9e28(flm, "HELLO", s);
	for(auto &a : flm) {
		std::cout << a << std::endl;
	}
	
	return 0;
}
