#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec{ 1,2,3,4,5,6,7,8,9 };
	cout << "The origin numbers:" << endl;
	for (auto j : vec)
		cout << j << " ";

	cout << endl;

	for (auto &i : vec)
		i = (i % 2) ? i * 2 : i;

	cout << "The changed numbers:" << endl;
	for(auto i :vec)
		cout << i << " ";

	cout << endl;

	return 0;
}