/*
	* 读取若干string对象并查找连续重复出现的单词；
	* 记录重复出现的最大次数以及对应的单词。
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include<string>
using std::string;

int main()
{
	string preWord, word, maxRepeatWord;	// 前一个单词，当前单词，重复次数最大的单词
	int repeatTime = 0, maxRepeatTime = 0;  // 记录重复次数， 记录最大重复次数。
	cout << "请输入一组单词" << endl;
	while (cin >> word)
	{
		if (word == preWord)
		{
			++repeatTime;
		}
		else
		{
			// 当前输入的单词与前面一个不重复
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
		cout << " The word ‘" << maxRepeatWord << "’ occurred " << maxRepeatTime << " times" << endl;
	}


	return 0;
}