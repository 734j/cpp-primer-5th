#include <iostream>
#include <vector>

/*
 *
 * 3.34
 *
 *
 */

int main () {

	int ia[] = {1,2,3,4,5,6,7,8,9,10};
	int *p1 = ia + 12;
	int *p2 = ia + 0;
	// Well as long as p2 is pointing to a valid element in the array it seems like
	// changing values in p1 cant make it illegal.
	// Though if i change p2 to point to -1 or lower then i get a buffer underflow
	
	// -12
	// p1 = -12
	// p1[-12] = ia[0]
	p1 += p2 - p1;
	std::cout << *p1 << " " << *p2 << std::endl;
	return 0;
}
