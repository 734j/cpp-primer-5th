#include <iostream>
#include <string>

/*
 *
 * 9.43
 *
 *
 */

std::string &replace_substr(std::string &s,
							const std::string oldval,
							const std::string newval) {
	
	for(auto beg = s.begin() ; beg < s.cend() + oldval.size() + 1; ) {
		auto oldbeg = oldval.cbegin();
		for(auto nbeg = beg ; oldbeg != oldval.cend() ; ++oldbeg, ++nbeg) {
			if(*oldbeg != *nbeg) {
				break;
			}
		}

		if(oldbeg == oldval.cend()) {
			auto pos = beg - s.begin();
			s.erase(pos, oldval.size());
			s.insert(pos, newval);
			beg = s.begin() + pos + newval.size();
		} else {
			++beg;
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
