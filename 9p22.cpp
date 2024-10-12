#include <iostream>
#include <vector>

/*
 *
 * 9.22
 *
 * I don't know what the author intends for the program to do.
 * It may be obvious to the author but if he does tell me then
 * it could be anything.
 */

int main () {

	int some_val = 0;
	std::vector<int> iv = {1,2,3,4,5,6,7,8};
	std::vector<int>::iterator iter = iv.begin(),
		mid = iv.begin() + iv.size()/2;
	while (iter != mid)
		if (*iter == some_val)
			iv.insert(iter, 2 * some_val);
	return 0;
}
