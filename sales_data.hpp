#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct SalesData;
SalesData add(const SalesData&, const SalesData&);
std::ostream &print(std::ostream&, const SalesData&);
std::istream &read(std::istream&, SalesData&);
struct SalesData {
	SalesData() = default;
	SalesData(const std::string &s): BookNo(s) { }
	SalesData(const std::string &s, unsigned n, double p):
		BookNo(s), UnitsSold(n), Revenue(p*n) { }
	SalesData(std::istream &sdcin) { read(sdcin, *this); };
	std::string isbn() const { return BookNo; }
	SalesData &combine(const SalesData&);
	double avg_price() const;
	std::string BookNo;
	unsigned int UnitsSold = 0;
	double Revenue = 0.0;
};

double SalesData::avg_price() const {

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

std::istream &read(std::istream &is, SalesData &item) {

	double price = 0;
	is >> item.BookNo >> item.UnitsSold >> price;
	item.Revenue = price * item.UnitsSold;
	return is;
}

std::ostream &print(std::ostream &os, const SalesData &item) {
	
	os << item.isbn() << " " << item.UnitsSold << " "
	   << item.Revenue << " " << item.avg_price();
	return os;
}

SalesData add(const SalesData sd1, const SalesData sd2) {

	SalesData sdsum = sd1;
	sdsum.combine(sd2);
	return sdsum;
}

#endif
