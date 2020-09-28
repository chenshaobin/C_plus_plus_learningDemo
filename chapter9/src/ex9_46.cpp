#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string pre_suffix(const string& name, const string& pre, const string& su)
{
	string ret(name);
	ret.insert(0, pre);
	ret.insert(ret.size(), su);

	return ret;
}
int main()
{
	string name("ethan");
	cout << pre_suffix(name, "Mr.", ",Jr.") << endl;

	return 0;
}