#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<string>
using std::string;

inline bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	cout << isShorter("abc", "abcd") << endl;
	return 0;
}