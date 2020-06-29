// read two strings and report whether the strings are equal
// If not, report which of the two is larger.

#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	string s1, s2;
	cout << "Please enter two strings:" << endl;
	while (cin >> s1 >> s2)
	{
		if (s1 == s2)
			cout << " The two strings are equal!" << endl;
		else
			cout << "The larger string is " << ((s1 > s2) ? s1 : s2);
	}
	return 0;
}