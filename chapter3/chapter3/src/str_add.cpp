#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	// 两个string对象相加
	string s1 = "Hello, ", s2 = "Ethan chen\n";
	cout << "s1 = " << s1 << " s2 = " << s2 << endl;
	string s3 = s1 + s2;
	cout << "s3(s1 + s2): " << s3 << endl;
	s1 += s2;
	cout << "s1 += s2: " << s1 << endl;
	/*
		* 字面值和string对象相加
		* 字符串字面值与string对象是不同的类型
		* 当string对象和字符串字面值混在一条语句中使用时，
		* 必须确保每个加法运算符的两侧的运算对象至少有一个时string对象 
	*/
	string s4 = "hello", s5 = "world";
	cout << "s4 = " << s4 << " s5 = " << s5 << endl;
	string s6 = s4 + ", " + s5 + '\n';
	cout << "s6: " << s6 << endl;
	// 以下语句是正确的
	string s7 = s1 + ", " + "world"; // 而 string s7 = "hello" + ", " + s5 是错误的语法

}