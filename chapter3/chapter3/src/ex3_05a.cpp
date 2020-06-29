// read strings from the standard input, concatenating what is read into one
// large string.
// Print the connective string.
#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	string connective_str, str;
	cout << "Please enter some strings:" << endl;
	/*
		while (cin >> str)
		{
			connective_str += str;
		}
	*/
	// separate adjacent input strings by a space.
	while (cin >> str)
	{
		if (connective_str.empty())
			connective_str += str;
		else
			connective_str += " " + str;
	}

	cout << " The connective string is " << connective_str << endl;


	return 0;
}