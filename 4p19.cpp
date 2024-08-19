#include <iostream>
#include <vector>

/*
 *
 * 4.19
 *
 *
 */

int main () {

	int *ptr = nullptr;
	int aa = 12374;
	int ival = 0;
	ptr = &aa;
	std::vector<int> vec = {1,2,3,4,5,6,7,8};

	if(ptr != 0 && *ptr++) {
		// Seems fine
		// I think it's a bit difficult because we sort of have to
		// assume what the author wants to actually do. Which is why
		// it is a little unclear how safe any of this really is.
		// The expression itself seems to be fine. But were we
		// to dereference it inside this if statement then things
		// could surely go very wrong. But then again,
		// i have no idea what the author intended to check for with the expression
		// I could say the same about the other 2 expressions in this program.
	}

	if(ival++ && ival) {
		// Seems fine
	}

	
	if(vec[ival] <= vec[ival + 1]) {
		++ival;
		// Undefined: vec[ival++] <= vec[ival]
	}
	
	return 0;
}
