#include <iostream>
#include<string>
#include<vector>
#include<list>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;
using std::vector;

int main()
{
	list<const char *> list1 = { "Mooophy", "pezy", "Queeuqueg" };
	vector<string> vec;
	vec.assign(list1.begin(), list1.end());
	for (const auto& item : vec)
	{
		cout << item << " ";
	}
	cout << endl;
	return 0;
}