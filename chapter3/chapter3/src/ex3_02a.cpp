#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	// ʹ��getline��ȡһ��
		string line1;
		cout << " ����������,�Ի��з�Ϊ�磺 " << endl;
		while (getline(cin, line1))
		{
			cout << line1 << endl;
			// �õ���string�����в����������Ļ��з�
			// getlineһ�������з��ͽ�����ȡ���������ؽ����֮�󻹿��Լ�������
		}
		return 0;
}