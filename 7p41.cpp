#include <iostream>

/*
 *
 * 7.41
 *
 *
 */

struct SalesData;
SalesData add(const SalesData&, const SalesData&);
std::ostream &print(std::ostream&, const SalesData&);
std::istream &read(std::istream&, SalesData&);
struct SalesData {
	SalesData(const std::string &s, unsigned n, double p): // constructor, both bookno, UnitsSold and Revenue
		BookNo(s), UnitsSold(n), Revenue(p*n) { }
	SalesData(): SalesData("", 0, 0) { std::cout << "delegated\n"; }
	SalesData(const std::string &s): SalesData(s, 0, 0) { std::cout << "delegated\n"; }
	SalesData(const std::string &s, unsigned ui): SalesData(s, ui, 0) { std::cout << "delegated\n"; }
	SalesData(std::istream &sdcin): SalesData() { read(sdcin, *this); std::cout << "delegated\n"; }; // Constructor, but read from istream
	std::string isbn() const { return BookNo; } // member function
	SalesData &combine(const SalesData&); // member function, defined elsewhere
	inline double avg_price() const; // member function, defined elsewhere
	std::string BookNo; // data member
	unsigned int UnitsSold = 0; // data member
	double Revenue = 0.0; // data member
};

inline double SalesData::avg_price() const {

	if (UnitsSold)
		return Revenue / UnitsSold;
	else
		return 0;
}

SalesData& SalesData::combine(const SalesData &rhs) {

	UnitsSold += rhs.UnitsSold;
	Revenue += rhs.Revenue;
	return *this;
}

std::istream &read(std::istream &is, SalesData &item) { // Not member function

	double price = 0;
	is >> item.BookNo >> item.UnitsSold >> price;
	item.Revenue = price * item.UnitsSold;
	return is;
}

std::ostream &print(std::ostream &os, const SalesData &item) { // Not member function

	os << item.isbn() << " " << item.UnitsSold << " "
	   << item.Revenue << " " << item.avg_price();
	return os;
}

SalesData add(const SalesData sd1, const SalesData sd2) { // Not member function

	SalesData sdsum = sd1;
	sdsum.combine(sd2);
	return sdsum;
}

int main () {

	SalesData a;
	SalesData b("WOW");
	SalesData c("Woo", 23);
	SalesData d("Woohoo", 33, 10);
	SalesData e(std::cin);
	return 0;
}