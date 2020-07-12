/*
	* 读取string对象的序列，直到连续出现两个相同的单词或者所有的单词都读完为止。
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include<string>
using std::string;

int main()
{
	string read, temp;	// read:当前输入的单词，temp:前面输入的单词
	cout << "Please enter a series of words:" << endl;
	while (cin >> read)
	{
		if (read == temp)
		{
			break;
		}
		else
		{
			temp = read;
		}
	}
	if (cin.eof())
		cout << "no word is repeated." << endl;		// 所有单词都读完，没有重复出现的单词
	else
		cout << read << " occurs twice in succession." << endl;

	return 0;

}