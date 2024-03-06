#pragma once
#include"Stocks.h"
#include<map>
#include<iostream>
class UserAccount
{
	std::map<std::string, Stocks> stocks;
	double AmountOfMoney;
	double AverageIncomePerMonth;  
	std::string FirstName, LastName;
	std::string passcode;
};

