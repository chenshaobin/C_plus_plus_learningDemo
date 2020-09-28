/*
	* Write a funtion that takes a string representing a name and two other
	* strings representing a prefix, such as ¡°Mr.¡± or ¡°Ms.¡± and a suffix,
	* such as ¡°Jr.¡± or ¡°III¡±. Using iterators and the insert and append functions,
	* generate and return a new string with the suffix and prefix added to the
	* given name.
*/
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string pre_suffix(const string& name,const string& pre, const string& su)
{
	auto ret = name;
	ret.insert(ret.begin(), pre.begin(), pre.end());
	ret.append(su);

	return ret;
}

int main()
{
	string name("ethan");
	cout << pre_suffix(name, "Mr.", ",Jr.") << endl;

	return 0;
}