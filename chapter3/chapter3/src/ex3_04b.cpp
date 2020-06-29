// read two strings and report whether the strings have the same length
// If not, report which is longer
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
		if (s1.size() == s2.size())
			cout << "The two strings have the same length." << endl;
		else
			cout << "The longer string is " << ((s1.size() > s2.size()) ? s1 : s2);
	}
}