#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main()
{
	// ��ʼ����ʽ
	string s1,s;
	string s2 = s1;
	string s3(s1);
	string s4 = "hello";	//������ʼ��������������ֵ�����Ǹ����ַ�
	string s5(10, 'c');		//��ʹ�õȺ�Ϊֱ�ӳ�ʼ��
	string s6("hello");
	// ��дstring����
	/*
		cin >> s >> s1;
		cout << s << s1 << endl; //��ȡ����ʱ�����Զ����Կ�ͷ�Ŀհײ��ӵ�һ���������ַ���ʼ����ֱ��������һ���հ�Ϊֹ��
	*/

	/*
		cout << "Please enter strings:" << endl;
		while (cin >> s1) 
		{
			// ��ȡ����������string����
			cout << s1 << endl;
		}
	*/
	// ʹ��getline��ȡһ��
	/*	
		string line1;
		cout << " ����������,�Ի��з�Ϊ�磺 " << endl;
		while (getline(cin, line1))
		{
			cout << line1 << endl;	
			// �õ���string�����в����������Ļ��з�
			// getlineһ�������з��ͽ�����ȡ���������ؽ����֮�󻹿��Լ�������
		}
			
	*/
	// ʹ��empty������ʵ��ֻ����ǿյ���
	/*
		string line2;
		while (getline(cin, line2))
		{
			if (!line2.empty())
				cout << line2 << endl;
		}
	*/
	// ʹ��size����
	cout << "the size of " << s4 << " is " << s4.size() << endl;


	return 0;
}