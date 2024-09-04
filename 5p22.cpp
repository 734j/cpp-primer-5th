#include <iostream>

/*
 *
 * 5.22
 *
 *
 */

int get_size() {

	return 2;
}

int main () {
	
 begin:
	int sz = get_size();
	if (sz <= 0) {
		goto begin;
	}

	for(int sz1 = get_size() ; sz1 <= 0 ; sz1 = get_size()) {}

	int sz2 = get_size();
	while(sz2 <= 0) {
		sz2 = get_size();
	}
	
	return 0;
}
