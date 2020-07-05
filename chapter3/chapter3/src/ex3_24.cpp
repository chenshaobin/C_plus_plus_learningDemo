/*
	* 输入一组整数，将每对相邻整数的和输出出来
	* 输入一组整数，先输出第一个和最后一个元素的和，接着输出第二个和倒数第二个元素的和，以此类推
	* 使用迭代器
*/
#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include<iterator>

int main()
{
	int i;
	vector<int> vec;
	cout << "Please enter a series of numbers:" << endl;
	while (cin >> i)
		vec.push_back(i);

	if (vec.empty())
	{
		cout << "input at least one integer" << endl;
		return -1;
	}
	else if (vec.size() == 1)
	{
		cout << *vec.begin() << "has no adjacent elements." << endl;
	}
	cout << "相邻两个数相加结果：" << endl;

	for (auto it = vec.begin(); it != vec.end() - 1; ++it)
	{
		cout << *it + *(it + 1) << ",";
	}
	cout << endl;
	cout << "先输出第一个和最后一个元素的和，接着输出第二个和倒数第二个元素的和，以此类推:" << endl;

	for (auto beg = vec.begin(), end = vec.end() - 1; beg <= end; beg++, end--)
	{
		cout << *beg + *end << ",";
	}
	cout << endl;

	return 0;
}