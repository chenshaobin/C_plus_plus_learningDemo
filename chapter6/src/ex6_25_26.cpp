#include<iostream>

using std::cin;
using std::cout;
using std::endl;

#include<string>

using std::string;

int main(int argc, char **argv)
{
	string str;
	for (int i = 1; i != argc; ++i)
	{
		// 可选的实参从argv[1]开始
		str += argv[i];
		str += " ";
	}
	cout << str << endl;
	return 0;
}