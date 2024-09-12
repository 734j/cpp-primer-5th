
/*
 *
 * 6.41
 *
 *
 */

char *init(int ht, int wd = 80, char bckgrnd = ' ') {

	if(ht || wd || bckgrnd) {}
	return 0;
}
int main () {

	// (A) illegal
	// (B) legal
	// (C) legal but not what the author intends, they think that the '*' will be the argument for bckgrnd when in reality the '*' character will be converted to an int
	return 0;
}
