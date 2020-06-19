#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item total;	// 保存下一条交易记录的变量
	std::cout << "Please enter sale datas:" << std::endl;
	if (std::cin >> total) {
		// 读入第一条交易数据，确保有数据可以进行下一步处理
		Sales_item trans;	//保存和的变量
		// 读入并处理剩余交易记录
		while (std::cin >> trans)
		{
			// 处理相同的书
			if (total.isbn() == trans.isbn())
				total += trans;	// 更新总的销售额
			else
			{
				//打印前一本书的结果
				std::cout << total << std::endl;
				total = trans;	//total现在表示下一本书的销售额
			}
		}
		std::cout << total << std::endl;	// 打印最后一本书的结果
	}
	else {
		//没有输入！警告读者
		std::cerr << "No data!" << std::endl;
		return -1;
	}
	return 0;
}