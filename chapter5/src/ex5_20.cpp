/*
	* ��ȡstring��������У�ֱ����������������ͬ�ĵ��ʻ������еĵ��ʶ�����Ϊֹ��
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include<string>
using std::string;

int main()
{
	string read, temp;	// read:��ǰ����ĵ��ʣ�temp:ǰ������ĵ���
	cout << "Please enter a series of words:" << endl;
	while (cin >> read)
	{
		if (read == temp)
		{
			break;
		}
		else
		{
			temp = read;
		}
	}
	if (cin.eof())
		cout << "no word is repeated." << endl;		// ���е��ʶ����꣬û���ظ����ֵĵ���
	else
		cout << read << " occurs twice in succession." << endl;

	return 0;

}