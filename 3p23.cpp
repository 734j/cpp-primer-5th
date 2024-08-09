#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <random>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.23
 *
 * I added a random number generator with some help from the internet.
 * That way i could have some random numbers which i think makes the
 * exercise a little more interesting :)
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
using std::vector;
int main () {

	int random_value = 0;
	vector<int> ff;
	decltype(ff.size()) amount = 10;
	std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 10000);
	for(decltype(ff.size()) i = 0 ; i != amount; i++) {
		random_value = distr(gen);
		ff.push_back(random_value);
		cout << ff[i] << "\n";
	}
	
	cout << endl;
	for(auto ffit = ff.begin() ; ffit != ff.end() ; ffit++) {
		*ffit *= 2; 
		cout << *ffit << "\n";
	}

	cout << endl;
	return 0;
}
