/*
	* Write your own versions of each of the print functions
	* presented in this section. Call each of these functions to print i and j
	* defined as follows:
	* int i = 0, j[2] = {0, 1};
*/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(int * const pi)
{
	if (pi)
		cout << *pi << endl;
}

void print(const char *cp)
{
	// 使用标记指定数组长度
	if (cp)
		while (*cp)
			cout << *cp++;
}

void print(const int *beg, const int *end)
{
	// 使用标准库规范，传递指向数组首元素和尾后元素的指针
	while (beg != end)
	{
		cout << *beg++ << endl;
	}
}

void print(const int ia[], size_t size)
{
	// 显式传递一个表示数组大小的形参
	for (size_t i = 0; i != size; ++i)
	{
		cout << ia[i] << endl;
	}
}

void print(const int(&arr)[2])
{
	// 数组引用形参
	for (auto elem : arr)
		cout << elem << endl;
}

int main()
{
	int i = 3, j[2] = { 0, 1 };
	print(&i);
	print(begin(j), end(j));
	print(j, end(j) - begin(j));
	print(const_cast<const int(&)[2]>(j));

	return 0;
}