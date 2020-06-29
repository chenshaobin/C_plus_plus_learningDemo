#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

#include <cctype>
using std::ispunct;
using std::toupper;

int main()
{
	string s("Hello World!!!");
	decltype(s.size()) punc_cnt = 0; //count the number of punctuation characters in s
	for (auto c : s)
	{
		if (ispunct(c))
			++punc_cnt;
	}
	cout << punc_cnt << " punctuation characters in " << s << endl;

	

	// convert str to uppercase
	string str("Hello World!");
	cout << "The original string is " << str << endl;
	// 想要改变string对象中字符的值,必须将循环变量定义成引用类型
	for (auto &c : str)
		c = toupper(c);
	
	cout << "the uppercase string is " << str << endl;

	// 将str2的第一个词改成大写形式
	string str2 = "Hello World!";
	for (decltype (str2.size()) index = 0; index != str2.size() && !isspace(str2[index]); ++index)
		str2[index] = toupper(str2[index]);

	cout << str2 << endl;
	return 0;
	
}