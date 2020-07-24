#include"../header/ex7_02_Sales_data.h"

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue)
	{
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
		{
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);	// 同一本书，则合计；
			}
			else
			{
				// 不是同一本书，则输出各自的信息
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
				total = trans;
			}
		}
		// 输出最后一条交易
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}
	else
	{
			cerr << "No data !" << endl;
			return -1;
	}
	return 0;
}