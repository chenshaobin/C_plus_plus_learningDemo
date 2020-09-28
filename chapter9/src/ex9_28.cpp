#include <iostream>
#include <forward_list>
#include<string>

using std::forward_list;
using std::string;
using std::cout;
using std::endl;

void find_and_insert(forward_list<string> &flist, const string& to_find, const string& to_add)
{
	auto prev = flist.before_begin();
	auto size = std::distance(flist.begin(), flist.end());
	for (auto curr = flist.begin(); curr != flist.end();prev = curr++ )
	{
		if (*curr == to_find)
		{
			flist.insert_after(curr, to_add);
		}
		
	}
	// δ�ҵ�to_find�����Ԫ����ӵ�β��s
	if(size == std::distance(flist.begin(), flist.end()))
		flist.insert_after(prev, to_add);
}

int main()
{
	forward_list<string> l{ "a", "b", "c", "d", "e", "f" };
	forward_list<string> r{ "a", "b", "c", "g", "d", "e", "f" };
	find_and_insert(l, "c", "g");
	for (auto item : l)
	{
		cout << item << " " ;
	}
	cout << endl;
	if (l == r)
	{
		cout << "��ӳɹ�" << endl;
	}
	else
		cout << "���ʧ��" << endl;

	return 0;
}