#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
	string s = "Hello World!";
	// ʹ�û��ڷ�Χ��for���
	for (auto &c : s)
		c = 'X';

	cout << s << endl;

	// ʹ��while
	decltype(s.size()) i = 0;
	cout << "use while:" << endl;
	while (i < s.size())
	{
		s[i] = 'Y';
		++i;
	}
	cout << s << endl;

	// ʹ�ô�ͳ��for
	cout << "use traditional for:" << endl;
	for (decltype(s.size()) i = 0; i < s.size();i++)
		s[i] = 'Z';

	cout << s << endl;

	string str;
	cout << "str:" << str[0] << endl;

	return 0;
}