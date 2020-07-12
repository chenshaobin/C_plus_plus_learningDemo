/*
	* 统计读入文本有多少元音字母(包含小写和大写)、
	* 空格、
	* 制表符、
	* 换行符
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0, 
		spaceCnt = 0, tabCnt = 0, newLineCnt = 0;
	char ch;
	cout << "请输入字符：" << endl;
	while (cin >> std::noskipws >> ch)
	{
		//  使用std::noskipws可以实现读取空白字符
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
			case ' ':
				++spaceCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			case '\n':
				++newLineCnt;
				break;
			default:
				++otherCnt;
				break;
		}
		

	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << '\n'
		<< "Number of vowel space: \t" << spaceCnt << '\n'
		<< "Number of vowel tab: \t" << tabCnt << '\n'
		<< "Number of vowel newLine: \t" << newLineCnt << '\n'
		<< "Number of vowel other: \t" << otherCnt << endl;

	return 0;
}