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
	Sales_data item1;
	print(cout, item1) << endl;

	Sales_data item2("0-201-78345-X");
	print(cout, item2) << endl;

	Sales_data item3("0-201-78345-X", 3, 25.00);
	print(cout, item3) << endl;

	Sales_data item4(cin);
	print(cout, item4) << endl;

}