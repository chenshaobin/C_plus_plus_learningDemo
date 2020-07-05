#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <cstring>

int main()
{
	// use string 
	string s1("string1");
	string s2("string2");
	
	if (s1 == s2)
		cout << s1 << " and " << s2 << " are same string. " << endl;
	else if (s1 > s2)
		cout << s1 << " > " << s2 << endl;
	else
		cout << s1 << " < " << s2 << endl;

	cout << "**************" << endl;
	// use C-style character strings
	// These strings are typically manipulated using Pointers
	const char *str1 = "string3";
	const char *str2 = "string4";
	auto result = strcmp(str1, str2);
	if(result == 0)
		cout << str1 << " and " << str2 << " are same string. " << endl;
	else if(result < 0)
		cout << str1 << " < " << str2 << endl;
	else 
		cout << str1 << " > " << str2 << endl;

	return 0;
}