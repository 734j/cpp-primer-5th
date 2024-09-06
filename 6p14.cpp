
/*
 *
 * 6.14
 *
 *
 */

int main () {

	// It should be a reference when we just want read access to the object and we aren't changing it, we dont have to copy it
	// It should be a reference when we want to change the object outside of the function
	// It could also be a reference when the object is a type that holds a lot of data and maybe it matters a lot for performance
	// If we want to return more information than just one object we could return information through a reference
	
	// It should not be a reference when we want to change the object inside the function but not outside it
	return 0;
}
