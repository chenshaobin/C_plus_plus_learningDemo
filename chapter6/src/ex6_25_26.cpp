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
		// ��ѡ��ʵ�δ�argv[1]��ʼ
		str += argv[i];
		str += " ";
	}
	cout << str << endl;
	return 0;
}