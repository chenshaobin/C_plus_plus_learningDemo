#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cout << "输入两组对象数据，包含ISBN号、售出的册数以及销售价格：" << std::endl;
	std::cin >> item1 >> item2;
	std::cout << "相加后的结果： " << std::endl;
	std::cout << item1 + item2 << std::endl;
	return 0;
}