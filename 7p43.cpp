#include <iostream>

/*
 *
 * 7.43
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

	C c;
	return 0;
}
