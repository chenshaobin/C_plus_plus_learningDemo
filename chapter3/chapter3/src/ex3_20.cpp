/*
	* 输入一组整数，将每对相邻整数的和输出出来
	* 输入一组整数，先输出第一个和最后一个元素的和，接着输出第二个和倒数第二个元素的和，以此类推
*/

#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
	vector<int> numbers;
	int i;
	cout << "Please enter a series of numbers:" << endl;
	while (cin >> i)
	{
		// 将数据存入到vector对象numbers
		numbers.push_back(i);
	}
	// 数据处理
	if (numbers.empty()) 
	{
		cout << "input at least one integer." << endl;
		return -1;
	}
	else if(numbers.size() == 1)
	{
		cout << numbers[0] << " don`t have any adjacent elements.";

	}
	else
	{
		cout << "相邻两个数相加结果：" << endl;
		for (decltype(numbers.size()) i = 0; i != numbers.size() - 1;++i)
		{
			cout << numbers[i] + numbers[i + 1] << " ";
		}
	}
	cout << endl;

	decltype(numbers.size()) size = numbers.size();
	if (size % 2 != 0)
		size = size / 2 + 1;
	else
		size /= 2;

	cout << "先输出第一个和最后一个元素的和，接着输出第二个和倒数第二个元素的和，以此类推:" << endl;
	for (decltype(numbers.size()) i = 0; i != size;++i)
		cout << numbers[i] + numbers[numbers.size() - i - 1] << " ";

	cout << endl;

	return 0;
}