/*
	* ����һ����������ÿ�����������ĺ��������
	* ����һ���������������һ�������һ��Ԫ�صĺͣ���������ڶ����͵����ڶ���Ԫ�صĺͣ��Դ�����
	* ʹ�õ�����
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
	cout << "������������ӽ����" << endl;

	for (auto it = vec.begin(); it != vec.end() - 1; ++it)
	{
		cout << *it + *(it + 1) << ",";
	}
	cout << endl;
	cout << "�������һ�������һ��Ԫ�صĺͣ���������ڶ����͵����ڶ���Ԫ�صĺͣ��Դ�����:" << endl;

	for (auto beg = vec.begin(), end = vec.end() - 1; beg <= end; beg++, end--)
	{
		cout << *beg + *end << ",";
	}
	cout << endl;

	return 0;
}