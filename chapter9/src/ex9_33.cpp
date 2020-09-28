/*
	 * 本程序运行会出错
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto begin = v.begin();
	while (begin != v.end()) {
		++begin;
		// 向容器中添加元素或者从容器中删除元素的操作可能会使指向容器的指针、引用或迭代器失效
		/*begin = */ v.insert(begin, 42);
		++begin;
	}

	for (auto i : v) cout << i << " ";

	return 0;
}