/*
	* ����һ����������ÿ�����������ĺ��������
	* ����һ���������������һ�������һ��Ԫ�صĺͣ���������ڶ����͵����ڶ���Ԫ�صĺͣ��Դ�����
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
		// �����ݴ��뵽vector����numbers
		numbers.push_back(i);
	}
	// ���ݴ���
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
		cout << "������������ӽ����" << endl;
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

	cout << "�������һ�������һ��Ԫ�صĺͣ���������ڶ����͵����ڶ���Ԫ�صĺͣ��Դ�����:" << endl;
	for (decltype(numbers.size()) i = 0; i != size;++i)
		cout << numbers[i] + numbers[numbers.size() - i - 1] << " ";

	cout << endl;

	return 0;
}