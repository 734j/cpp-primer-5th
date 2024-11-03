#include <iostream>
#include <string>

/*
 *
 * 9.44
 *
 *
 */

std::string &replace_substr(std::string &s,
							const std::string oldval,
							const std::string newval) {
	
	for(decltype(s.size()) i = 0 ; i < s.size() ; ) {
		if(s.substr(i, oldval.size()) == oldval) {
			s.replace(i, oldval.size(), newval);
			i += newval.size();
		} else {
			++i;
		}
	}
	
	return s;
}

int main () {

	std::string a = "hahahaha WOW a WO hah WOW WOW WOW";
	std::string b = "tho though to tho yo tho bro tho";
	std::cout << replace_substr(a, "WOW", "wow!") << std::endl;
	std::cout << replace_substr(b, "tho", "though") << std::endl;
	return 0;
}
