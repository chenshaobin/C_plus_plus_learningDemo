#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cout << "��������������ݣ�����ISBN�š��۳��Ĳ����Լ����ۼ۸�" << std::endl;
	std::cin >> item1 >> item2;
	std::cout << "��Ӻ�Ľ���� " << std::endl;
	std::cout << item1 + item2 << std::endl;
	return 0;
}