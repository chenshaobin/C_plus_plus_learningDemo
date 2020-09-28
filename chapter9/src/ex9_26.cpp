#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;
using std::cout;
using std::endl;
using std::end;

int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> vec(ia, end(ia));	// 指针也是迭代器
	list<int> lst(vec.begin(), vec.end());
	//! remove even value
	for (auto it = vec.begin(); it != vec.end();)
		if (!(*it & 0x1))	// (!(*it % 2))
			it = vec.erase(it);
		else
			++it;

	//! remove odd value
	for (auto it = lst.begin(); it != lst.end();)
		if (*it & 0x1)	// (*it % 2)
			it = lst.erase(it);
		else
			++it;
	//! print
	cout << "list : ";
	for (auto i : lst) cout << i << " ";
	cout << "\nvector : ";
	for (auto i : vec) cout << i << " ";
	cout << std::endl;

	return 0;
}