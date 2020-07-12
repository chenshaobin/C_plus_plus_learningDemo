/*
	* 检验其中一个vector对象是否是另一个的前缀。
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include<vector>

using std::vector;

int main()
{
	vector<int> vec1{0,1,1,2 };
	vector<int> vec2{ 0,1,1,2,3,5,8 };
	auto size = vec1.size() < vec2.size() ? vec1.size() : vec2.size();
	for (decltype(vec1.size()) i = 0; i != size; ++i)
	{
		if (vec1[i] != vec2[i])
		{
			cout << "False" << endl;
		}
	}
	cout << "True" << endl;


	return 0;
}