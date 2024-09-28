#include <iostream>

/*
 *
 * 7.38
 *
 * Not exactly 100% sure what i was supposed to do but here it is.
 */

class ch7e738 {
public:
	ch7e738(std::istream& in) {
		in >> i;
	}
	
	std::ostream& printmemb(std::ostream& pmcout) {
		pmcout << i;
		return pmcout;
	}
	
private:
	int i;
};

int main () {

	ch7e738 s(std::cin);
	s.printmemb(std::cout) << std::endl;
	return 0;
}
