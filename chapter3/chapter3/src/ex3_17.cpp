/*
	* Read a sequence of words from cin and store the values a vector.
	* After you've read all the words, process the vector and change each word to uppercase.
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
	string word;
	vector<string> text;
	cout << "请输入一组单词：" << endl;
	while (cin >> word)
	{
		// 将word添加到text后面,
		text.push_back(word);
	}

	for (auto &str : text)
	{
		// 将每个单词转换为大写
		for (auto &c : str)
		{
			c = toupper(c);
		}	
	}
	for (decltype(text.size()) i = 0; i < text.size(); i++)
	{
		// 输出结果，每五个词一行
		if (i != 0 && i % 5 == 0)
			cout << endl;
		cout << text[i] << " ";
	}
	cout << endl;


	return 0;
}