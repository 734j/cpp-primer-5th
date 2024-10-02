#include <iostream>

/*
 *
 * 
 *
 *
 */

class Debug {
public:
	constexpr Debug(bool b = true): hw(b), io(b), other(b) { }
	constexpr Debug(bool h, bool i, bool o):
		hw(h), io(i), other(o) { }
	
	constexpr bool any() { return hw || io || other; }
	void set_io(bool b) { io = b; }
	void set_hw(bool b) { hw = b; }
	void set_other(bool b) { hw = b; }
	void printDbg() { std::cout << hw << "\n" << io << "\n" << other << std::endl; }
private:
	bool hw;
	// hardware errors other than IO errors
	bool io;
	// IO errors
	bool other; // other errors
};

int main () {

	/*
	  From page 299-300, i just needed to confirm what the code is doing.
	 */
	Debug d1;
	Debug d2(true, true, false);
	d1.printDbg();
	std::cout << "------" << std::endl;
	d2.printDbg();
	return 0;
}
