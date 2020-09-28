#include"../../chapter7/header/ex7_02_Sales_data.h"
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
#include<string>
using std::string;
#include<vector>
using std::vector;
#include<fstream>
using std::ifstream;

int main(int argc, char **argv)
{
	ifstream input(argv[1]);	//�Ҽ���Ŀ���ҵ����ԣ���������ѡ�����ҵ��������������"../data/book.txt"
	Sales_data total;
	if (read(input, total))
	{
		Sales_data trans;
		while (read(input, trans))
		{
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);

			}
			else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cerr << "No Data!" << endl;
	}

	return 0;
}
