#include <iostream>
#include<string>
#include<vector>
#include<deque>

using std::cin;
using std::cout;
using std::endl;
using std::deque;
using std::string;
using std::vector;


int main()
{
	deque<string> input;
	string str;
	cout << "Please enter some word!" << endl;
	while (cin >> str)
	{
		input.push_back(str);
	}
	for (auto iter = input.cbegin();iter != input.cend();++iter)
	{
		cout << *iter << " ";
	}

	return 0;
}