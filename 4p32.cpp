#include <iostream>

/*
 *
 * 4.32
 *
 * We have a pointer thats basically like a begin() iterator
 * We have ix that starts at 0
 * We keep looping as long as ix is not equal to the size
 * We keep looping as long as ptr does not point to one past the last element in ia
 * This ensures that we can safely do stuff to the array inside the loop
 */

int main () {

	constexpr int size = 5;
	int ia[size] = {1,2,3,4,5};
	for (int *ptr = ia, ix = 0 ; ix != size && ptr != ia+size ; ++ix, ++ptr){
		/* . . . */
	}

	return 0;
}
