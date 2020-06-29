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
	cout << "������һ�鵥�ʣ�" << endl;
	while (cin >> word)
	{
		// ��word��ӵ�text����,
		text.push_back(word);
	}

	for (auto &str : text)
	{
		// ��ÿ������ת��Ϊ��д
		for (auto &c : str)
		{
			c = toupper(c);
		}	
	}
	for (decltype(text.size()) i = 0; i < text.size(); i++)
	{
		// ��������ÿ�����һ��
		if (i != 0 && i % 5 == 0)
			cout << endl;
		cout << text[i] << " ";
	}
	cout << endl;


	return 0;
}