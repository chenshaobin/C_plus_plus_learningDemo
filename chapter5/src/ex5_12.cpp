/*
	* 统计元音字母
	* 也能统计含有以下两个字符的字符序列的数量：ff、fl、fi
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
	char ch;
	char preCh = '\0';	// 存储前一个输入的字符，
	cout << "请输入字符：" << endl;
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
		preCh = ch; //存放前一个输入的字符，用于双字符序列判断
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