#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cout << "输入两组对象数据，包含ISBN号、售出的册数以及销售价格(比较版本)：" << std::endl;
	std::cin >> item1 >> item2;
	// 相加前首先检查item1和item2是否表示相同的书
	if (item1.isbn() == item2.isbn()) {
		std::cout << "相加后的结果： " << std::endl;
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "Data must refer to same Isbn" << std::endl;
		return -1;
	}
}