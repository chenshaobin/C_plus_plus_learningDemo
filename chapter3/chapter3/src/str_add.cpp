#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	// ����string�������
	string s1 = "Hello, ", s2 = "Ethan chen\n";
	cout << "s1 = " << s1 << " s2 = " << s2 << endl;
	string s3 = s1 + s2;
	cout << "s3(s1 + s2): " << s3 << endl;
	s1 += s2;
	cout << "s1 += s2: " << s1 << endl;
	/*
		* ����ֵ��string�������
		* �ַ�������ֵ��string�����ǲ�ͬ������
		* ��string������ַ�������ֵ����һ�������ʹ��ʱ��
		* ����ȷ��ÿ���ӷ��������������������������һ��ʱstring���� 
	*/
	string s4 = "hello", s5 = "world";
	cout << "s4 = " << s4 << " s5 = " << s5 << endl;
	string s6 = s4 + ", " + s5 + '\n';
	cout << "s6: " << s6 << endl;
	// �����������ȷ��
	string s7 = s1 + ", " + "world"; // �� string s7 = "hello" + ", " + s5 �Ǵ�����﷨

}