#include <iostream>

/*
 *
 * 7.49
 *
 *
 */

struct SalesData;
SalesData add(const SalesData&, const SalesData&);
std::ostream &print(std::ostream&, const SalesData&);
std::istream &read(std::istream&, SalesData&);
struct SalesData {
	SalesData() = default;
	SalesData(const std::string &s): BookNo(s) { } //constructor, bookNo only
	SalesData(const std::string &s, unsigned n, double p): // constructor, both bookno, UnitsSold and Revenue
		BookNo(s), UnitsSold(n), Revenue(p*n) { }
	SalesData(std::istream &sdcin) { read(sdcin, *this); }; // Constructor, but read from istream
	std::string isbn() const { return BookNo; } // member function

	//-------
	SalesData &combine(SalesData);
	//SalesData &combine(SalesData&);
	//SalesData &combine(const SalesData&) const; Does not compile
	//-------

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

SalesData& SalesData::combine(SalesData rhs) {

	UnitsSold += rhs.UnitsSold;
	Revenue += rhs.Revenue;
	return *this;
}

/*
SalesData& SalesData::combine(SalesData &rhs) {

	UnitsSold += rhs.UnitsSold;
	Revenue += rhs.Revenue;
	return *this;
}
*/
/*
SalesData& SalesData::combine(const SalesData &rhs) const {

	UnitsSold += rhs.UnitsSold;
	Revenue += rhs.Revenue;
	return *this;
}
*/

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

	/*
	  For each of the three following declarations of combine, explain what
	  happens if we call i.combine(s), where i is a Sales_data and s is a string:
	  
	  (a) SalesData &combine(Sales_data); It does not combine as expected, i'm not sure.
	  (b) Sales_data &combine(Sales_data&);	// does not compile
	  (c) Sales_data &combine(const Sales_data&) const; // does not compile
	 */
	std::string s = "7.49";
	SalesData i("",0,0);
	i.combine(SalesData(s));
	print(std::cout, i);
	return 0;
}
