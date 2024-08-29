
/*
 *
 * 5.13
 *
 *
 */

int main () {

	// (a) there are no breaks, so we add breaks after each case
	// (b) ix is initialized in case 1 but we try to use it in default, we add brackets and initialize it in default as well, or maybe make the variable global
	// (c) we can only have one value per case, we would need to add a case for each value so it can fall through
	// (d) case labels must be integral constant expressions
	return 0;
}
