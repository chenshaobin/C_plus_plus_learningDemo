#include"../../chapter2/chapter2/header/Sales_data.h"

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.bookNo)
	{
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.bookNo)
		{
			if (total.bookNo == trans.bookNo)
				total.AddData(trans);
			else
			{
				total.Print;
				total = trans;
			}
		}
		total.Print();
	}
	else
	{
		cerr << "No data !" << endl;
		return -1;
	}
	return 0;
}