#include <iostream>
#include <forward_list>
#include<string>
#include <list>

using std::list;
using std::forward_list;
using std::string;
using std::cout;
using std::endl;
using std::advance;

int main()
{
	list<int> vi = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto iter = vi.begin();
	while (iter != vi.end()) {
		if (*iter % 2) {
			iter = vi.insert(iter, *iter);
			advance(iter, 2);	// list ����forward_list����ʹ�����������++��ʹ��std::advanceʵ����Ӧ�Ĺ���
		}
		else
			iter = vi.erase(iter);
	}

	for (auto i : vi) cout << i << " ";

	return 0;
}