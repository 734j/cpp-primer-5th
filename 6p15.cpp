
/*
 *
 * 6.15
 *
 *
 */

int main () {

	/*
	  Why is s a reference to const?
	  Because we just need read access to it, we are checking the size
	  
	  Why is occurs a plain reference?
	  Because we want to return information through occurs so we need write access
	  
	  Why is c not a reference?
	  'c' is the character we are looking for. I suspect it's not a reference because
	  if we accidentally change c then we could have some serious bugs. It would probably
	  be fine if we did const reference to char but it really does not matter much.
	  
	  What if we made s a plain reference?
	  I don't think it would matter much with the function as it is right now but it would
	  make it so if someone modifies the function, they could make a mistake and somehow
	  change the contents of 's'. Because we have const reference we ensure that we can only
	  read and not write.
	  
	  What if we made occurs a reference to const?
	  The function would not work and perhaps not even compile. We would not be able to return
	  the information through the reference
	  
	 */
	return 0;
}
