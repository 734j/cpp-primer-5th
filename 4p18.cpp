
/*
 *
 * 4.18
 *
 *
 */

int main () {
	/*
	auto pbeg = v.begin();
	while (pbeg != v.end() && *beg >= 0)
		cout << *pbeg++ << endl;
	*/

	// It would increment pbeg by 1 and then dereference and print.
	// This would mean that the first element in the vector is not printed
	// This would also mean dereferencing whatever is at v.end() which is not a good idea.
	return 0;
}
