#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	string str = "Hello";
	string phrase = "Hello World";
	string slang = "Hiya";
	cout << "compare strings: " << str << "¡¢" << phrase << " and " << slang << endl;
	if (str < phrase) cout << str << " is smaller than " << phrase<< endl;
	if (slang > str) cout << slang << " is greater than " << str << endl;
	if (slang > phrase) cout << slang << " is greater than " << slang << endl;

	return 0;
}