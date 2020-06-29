/*
	* read a sequence of ints from cin and
	* store those values in a vector.

	* read a sequence of strings from cin and
	* store those values in a vector.
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
	
	/*
		// ex3.14
		vector<int> num;
		int i;
		cout << "Please enter a series of numbers: " << endl;
		while (cin >> i)
		{
			cout << i << endl;
			num.push_back(i);
		}
	*/
	// ex3.15
	vector<string> str;
	string s;
	cout << "Please enter a series of strings" << endl;
	while (cin >> s)
	{
		cout << s << endl;
		str.push_back(s);
	}


	return 0;
}