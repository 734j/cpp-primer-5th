#include <iostream>

/*
 *
 * 7.35
 *
 *
 */

typedef std::string Type;
Type initVal();
class Exercise {
public:
	typedef double Type;
	Type setVal(Type); // double / double
	Type initVal(); // double
private:
	int val;
};

Exercise::Type Exercise::setVal(Exercise::Type parm) {
	val = parm + initVal(); // double initVal() is used
	return val; // Return val as double?
}

Exercise::Type Exercise::initVal() {
	return 0;
}

int main () {
	return 0;
}
