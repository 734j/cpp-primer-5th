#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct SalesData {
	std::string isbn() const { return BookNo; }
	SalesData &combine(const SalesData);
	double avg_price() const;
	std::string BookNo;
	unsigned int UnitsSold = 0;
	double Revenue = 0.0;
};

SalesData add(const SalesData&, const SalesData&);
std::ostream &print(std::ostream&, const SalesData&);
std::istream &read(std::istream&, SalesData&);
#endif
