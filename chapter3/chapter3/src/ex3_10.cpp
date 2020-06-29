// reads a string of characters including punctuation and writes what was read
// but with the punctuation removed.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

#include <cctype>
using std::ispunct;

int main()
{
	string str;
	/*
		cout << "Enter a string of characters including puntuation: " << endl;
		while (getline(cin, str))
		{
			for (auto c : str)
				if (!ispunct(c)) cout << c;
		}
	*/
	const string s = "Keep out!";
	decltype(s.size()) cnt = 0;
	for (auto &c : s)
	{
		++cnt;
	}

	return 0;
}