#include <iostream>
#include <vector>
/*
 *
 * 7.44
 *
 *
 */

class NoDefault {
public:
	NoDefault(int j): i(j) {}
	int geti() {return i;}
private:
	int i;
};

class C {
public:
	C(): nd(0) { }
private:
	NoDefault nd;
};

int main () {

	//std::vector<NoDefault> vnd(10); // NOT legal
	std::vector<C> vc(10); // LEGAL
	return 0;
}
