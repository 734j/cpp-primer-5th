#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct SalesData {
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

SalesData add(const SalesData&, const SalesData&);
std::ostream &print(std::ostream&, const SalesData&);
std::istream &read(std::istream&, SalesData&);

#endif
