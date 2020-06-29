// print the size and contents of the vectors from exercise 3.13.

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
	// just list one example
	vector<string> v7{ 10, "hi" };
	cout << "\" v7 \" :{\"size\":\"" << v7.size() << "\",\"value\":[";
	for (auto i : v7)
	{
		if (i.empty())
			cout << "(null)" << ",";
		else
			cout << i << ",";
	}

	if (!v7.empty())
		cout << "\b";
	cout << "]}\n" << endl;




	return 0;
}