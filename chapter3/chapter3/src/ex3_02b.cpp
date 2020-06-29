#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	string word;
	cout << "请输入数据，一次只读入一个词：" << endl;
	while (cin >> word)
		cout << word << endl;

	return 0;
}