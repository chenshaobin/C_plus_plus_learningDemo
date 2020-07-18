#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::next;

#include <vector>
using std::vector;

void print(vector<int> &vec)
{
#ifndef NDEBUG
	cout << "vector size: " << vec.size() << endl;
#endif
	if (!vec.empty())
	{
		auto temp = vec.back();		// 返回末尾元素的引用，
		vec.pop_back();
		print(vec);
		cout << temp << " ";

	}
}

int main()
{
	vector<int> vec{ 1,2,3,4,5 };
	print(vec);

	return 0;
}