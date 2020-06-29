#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main()
{
	// 初始化方式
	string s1,s;
	string s2 = s1;
	string s3(s1);
	string s4 = "hello";	//拷贝初始化，不包括字面值最后的那个空字符
	string s5(10, 'c');		//不使用等号为直接初始化
	string s6("hello");
	// 读写string对象
	/*
		cin >> s >> s1;
		cout << s << s1 << endl; //读取操作时，会自动忽略开头的空白并从第一个真正的字符开始读起，直到遇到下一个空白为止。
	*/

	/*
		cout << "Please enter strings:" << endl;
		while (cin >> s1) 
		{
			// 读取任意数量的string对象
			cout << s1 << endl;
		}
	*/
	// 使用getline读取一行
	/*	
		string line1;
		cout << " 请输入数据,以换行符为界： " << endl;
		while (getline(cin, line1))
		{
			cout << line1 << endl;	
			// 得到的string对象中并不包括最后的换行符
			// getline一遇到换行符就结束读取操作并返回结果，之后还可以继续操作
		}
			
	*/
	// 使用empty函数，实现只输出非空的行
	/*
		string line2;
		while (getline(cin, line2))
		{
			if (!line2.empty())
				cout << line2 << endl;
		}
	*/
	// 使用size函数
	cout << "the size of " << s4 << " is " << s4.size() << endl;


	return 0;
}