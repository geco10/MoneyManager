#pragma once
#include <iostream>
class Stocks
{
	double IncomeFromStock;
	double PercentFromCompanyIncome;
	std::string CompanyName;
	double StockCost;
	double AverageCompanyIncomePerMonth;
	double AverageCompanyGrow;
public:
	void PrintInfo()const;
	void Sync();
	Stocks(double IFS, std::string CN, double ACIPM, double PFCI, double SC);
};

