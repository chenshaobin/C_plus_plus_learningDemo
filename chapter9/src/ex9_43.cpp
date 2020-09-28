/*
		  * Write a function that takes three strings, s, oldVal, and newVal.
          * Using iterators, and the insert and erase functions replace
          * all instances of oldVal that appear in s by newVal.
          * Test your function by using it to replace common abbreviations,
          * such as "tho" by "though" and "thru" by "through".
*/


#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::distance;
using std::advance;

void Replace(string& s, const string& oldVal, const string& newVal)
{
	for (auto beg = s.begin(); distance(beg, s.end()) >= distance(oldVal.begin(), oldVal.end());)
	{
		if (string{ beg, beg + oldVal.size()} == oldVal)
		{
			beg = s.erase(beg, beg + oldVal.size());
			beg = s.insert(beg, newVal.cbegin(), newVal.cend());
			advance(beg, newVal.size());
		}
		else
			++beg;
	}
}

int main()
{
	string str{ "To drive straight thru is a foolish, tho courageous act." };
	Replace(str, "thru", "through");
	Replace(str, "tho", "though");
	cout << str << endl;
}