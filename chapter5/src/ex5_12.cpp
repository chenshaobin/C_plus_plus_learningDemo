/*
	* ͳ��Ԫ����ĸ
	* Ҳ��ͳ�ƺ������������ַ����ַ����е�������ff��fl��fi
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
	char ch;
	char preCh = '\0';	// �洢ǰһ��������ַ���
	cout << "�������ַ���" << endl;
	while (cin >> std::noskipws >> ch)
	{
		switch (ch) {
		case  'a':
		case  'A':
			++aCnt;
			break;
		case  'e':
		case  'E':
			++eCnt;
			break;
		case  'i':
			if (preCh == 'f')
				++fiCnt;
		case  'I':
			++iCnt;
			break;
		case  'o':
		case  'O':
			++oCnt;
			break;
		case  'u':
		case  'U':
			++uCnt;
			break;
		case 'f':
			if (preCh == 'f')
				++ffCnt;
			break;
		case 'l':
			if (preCh == 'f')
				++flCnt;
			break;
		}
		preCh = ch; //���ǰһ��������ַ�������˫�ַ������ж�
	}
	cout << "Number of vowel a(A): \t" << aCnt << '\n'
		 << "Number of vowel e(E): \t" << eCnt << '\n'
		 << "Number of vowel i(I): \t" << iCnt << '\n'
		 << "Number of vowel o(O): \t" << oCnt << '\n'
		 << "Number of vowel u(U): \t" << uCnt << '\n'
		 << "Number of ff: \t"		   << ffCnt << '\n' 
		 << "Number of fl: \t"		   << flCnt << '\n'
		 << "Number of fi: \t"         << fiCnt << endl;

	return 0;
}