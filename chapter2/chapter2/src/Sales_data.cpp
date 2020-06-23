#include<iostream>
#include <string>
#include "/C++_learning_demo/C_plus_plus_learningDemo/chapter2/chapter2/header/Sales_data.h"

int main()
{
	Sales_data data1, data2;
	double price = 0;	//书的单价，用于计算销售收入
	std::cout << "输入第一笔交易(ISBN、销售数量、单价)：" << std::endl;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	// 计算销售收入
	data1.revenue = data1.units_sold * price;

	std::cout << "输入第二笔交易(ISBN、销售数量、单价)：" << std::endl;
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	// 计算销售收入
	data1.revenue = data2.units_sold * price;

	// 检查两笔交易
	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		// 输出ISBN，总销售量、总销售额、平均价格
		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
		{
			std::cout << totalRevenue / totalCnt << std::endl;
		}
		else
			std::cout << "(no sales)" << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}

	
}

