#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cout << "��������������ݣ�����ISBN�š��۳��Ĳ����Լ����ۼ۸�(�Ƚϰ汾)��" << std::endl;
	std::cin >> item1 >> item2;
	// ���ǰ���ȼ��item1��item2�Ƿ��ʾ��ͬ����
	if (item1.isbn() == item2.isbn()) {
		std::cout << "��Ӻ�Ľ���� " << std::endl;
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "Data must refer to same Isbn" << std::endl;
		return -1;
	}
}