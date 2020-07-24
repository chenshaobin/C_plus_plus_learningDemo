#include"../header/ex7_02_Sales_data.h"
/*
	* 委托构造函数的执行顺序
*/
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;

#include<string>
using std::string;

int main()
{
	cout << "1. default way: " << endl;
	cout << "----------------" << endl;
	Sales_data s1;

	cout << "\n 2. use std::string as parameter: " << endl;
	cout << "----------------" << endl;
	Sales_data s2("test 2");

	cout << "\n 3. complete parameters: " << endl;
	cout << "----------------" << endl;
	Sales_data s3("CPP-Primer-5th", 5, 20);

	cout << "\n 4. use istream as parameter: " << endl;
	cout << "----------------" << endl;
	Sales_data s4(cin);

	return 0;
}