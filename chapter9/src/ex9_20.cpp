#include <iostream>
#include<string>
#include<vector>
#include<deque>
#include<list>

using std::cin;
using std::cout;
using std::endl;
using std::deque;
using std::list;
using std::string;
using std::vector;

int main()
{
	list<int> listNumber{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	deque<int> odd, even;
	for (auto i : listNumber)
	{
		// (i & 0x1 ? odd : even).push_back(i);
		((i % 2 == 0) ? even : odd).push_back(i);
	}
	cout << "ÆæÊıdeque:" << endl;
	for (auto i : odd) cout << i << " ";
	cout << endl;
	cout << "Å¼Êıdeque:" << endl;
	for (auto i : even) cout << i << " ";
	cout << endl;
	return 0;
}