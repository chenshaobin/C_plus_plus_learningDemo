#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void Replace(string& s, string const& oldVal, string const& newVal)
{
	for (string::size_type i = 0; i != s.size(); ++i)
		if (s.substr(i, oldVal.size()) == oldVal) {
			s.replace(i, oldVal.size(), newVal);
			i += newVal.size() - 1;
		}
}

int main()
{
	string str{ "To drive straight thru is a foolish, tho courageous act." };
	Replace(str, "thru", "through");
	Replace(str, "tho", "though");
	cout << str << endl;
}