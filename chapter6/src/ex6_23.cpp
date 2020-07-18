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
	// ʹ�ñ��ָ�����鳤��
	if (cp)
		while (*cp)
			cout << *cp++;
}

void print(const int *beg, const int *end)
{
	// ʹ�ñ�׼��淶������ָ��������Ԫ�غ�β��Ԫ�ص�ָ��
	while (beg != end)
	{
		cout << *beg++ << endl;
	}
}

void print(const int ia[], size_t size)
{
	// ��ʽ����һ����ʾ�����С���β�
	for (size_t i = 0; i != size; ++i)
	{
		cout << ia[i] << endl;
	}
}

void print(const int(&arr)[2])
{
	// ���������β�
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