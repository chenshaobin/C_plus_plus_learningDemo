#ifndef EX7_57_ACCOUNT_H
#define EX7_57_ACCOUNT_H

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<string>
using std::string;

class Account {
public:
	void calculate() 
	{
		amount += amount * interestRate;
	}
	static double rate()
	{
		return interestRate;
	}
	static void rate(double);

private:
	string owner;
	double amount;
	static double interestRate;
	static constexpr double todayRate = 50.0;
	static double initRate() { return todayRate; }
};

void Account::rate(double newRate)
{
	interestRate = newRate;
}
double Account::interestRate = initRate();


#endif
