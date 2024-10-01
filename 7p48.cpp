#include <iostream>

/*
 *
 * 7.48
 *
 *
 */

struct SalesData;
SalesData add(const SalesData&, const SalesData&);
std::ostream &print(std::ostream&, const SalesData&);
std::istream &read(std::istream&, SalesData&);
struct SalesData {
	SalesData() = default;
	explicit SalesData(const std::string &s): BookNo(s) { } //constructor, bookNo only
	SalesData(const std::string &s, unsigned n, double p): // constructor, both bookno, UnitsSold and Revenue
		BookNo(s), UnitsSold(n), Revenue(p*n) { }
	explicit SalesData(std::istream &sdcin) { read(sdcin, *this); }; // Constructor, but read from istream
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

	// Seems like the same thing happens for explicit and non-explicit
	
	std::string null_isbn("9-999-99999-9");
	SalesData i1(null_isbn);
	SalesData i2("9-999-99999-9");
	print(std::cout, i1) << "\n";
	print(std::cout, i2) << std::endl;
	return 0;
}
