#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	// 使用getline读取一行
		string line1;
		cout << " 请输入数据,以换行符为界： " << endl;
		while (getline(cin, line1))
		{
			cout << line1 << endl;
			// 得到的string对象中并不包括最后的换行符
			// getline一遇到换行符就结束读取操作并返回结果，之后还可以继续操作
		}
		return 0;
}