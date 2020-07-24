#include "../header/ex7_02_Sales_data.h"

#include<string>
using std::string;

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::istream;
using std::ostream;

int main()
{
	Sales_data total(cin);
	if (!total.isbn().empty())
	{
		istream &is = cin;
		while (is)
		{
			Sales_data trans(is);
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(cout, total);
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cerr << "No data !" << endl;
		return -1;
	}
	return 0;
}