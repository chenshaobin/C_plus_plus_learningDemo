/*
	* ��ȡ����string���󲢲��������ظ����ֵĵ��ʣ�
	* ��¼�ظ����ֵ��������Լ���Ӧ�ĵ��ʡ�
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include<string>
using std::string;

int main()
{
	string preWord, word, maxRepeatWord;	// ǰһ�����ʣ���ǰ���ʣ��ظ��������ĵ���
	int repeatTime = 0, maxRepeatTime = 0;  // ��¼�ظ������� ��¼����ظ�������
	cout << "������һ�鵥��" << endl;
	while (cin >> word)
	{
		if (word == preWord)
		{
			++repeatTime;
		}
		else
		{
			// ��ǰ����ĵ�����ǰ��һ�����ظ�
			repeatTime = 1;
			preWord = word;
		}
		if (maxRepeatTime < repeatTime)
		{
			maxRepeatTime = repeatTime;
			maxRepeatWord = preWord;
		}
	}

	if (maxRepeatTime <= 1)
		cout << "No word is repeated!" << endl;
	else
	{
		cout << " The word ��" << maxRepeatWord << "�� occurred " << maxRepeatTime << " times" << endl;
	}


	return 0;
}